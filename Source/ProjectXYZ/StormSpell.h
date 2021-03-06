// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Spell.h"

#include "StormSpell.generated.h"

/**
 * 
 */
UCLASS()
class PROJECTXYZ_API AStormSpell : public ASpell
{
	GENERATED_BODY()
	
public:
	AStormSpell();

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Mesh)
		UStaticMeshComponent* mesh;

	void EndBehavior() override;
	void StartBehavior(const APlayerCharacter& player) override;


	UFUNCTION()
		void OnOverlapBegin(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	FTimerHandle timerHandler;

	UPROPERTY(EditAnywhere)
	TSubclassOf<AActor> StormUnitBP;

	TArray<AActor*> Units;
	
	
};
