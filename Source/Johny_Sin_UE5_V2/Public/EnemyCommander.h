// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EnemyCommander.generated.h"

UCLASS()
class JOHNY_SIN_UE5_V2_API AEnemyCommander : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AEnemyCommander();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY()
	TArray<AActor*> allEnemy;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintCallable, Category = "Notify")
	void Register(AActor* Enemy);

	UFUNCTION(BlueprintCallable, Category = "Notify")
	void Removed(AActor* Enemy);

	//UPROPERTY()
	//int maxChaser;

	//UPROPERTY()
	//int maxCamper;

	//UPROPERTY()
	//int chaserNum;

	//UPROPERTY()
	//int surrounderNum;

	//UPROPERTY()
	//int camperNum;

	//UFUNCTION(BlueprintCallable)
	//bool RequestChasing(AActor* enemy);

};
