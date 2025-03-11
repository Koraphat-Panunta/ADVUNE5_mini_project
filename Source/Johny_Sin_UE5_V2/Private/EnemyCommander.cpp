// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemyCommander.h"

// Sets default values
AEnemyCommander::AEnemyCommander()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void AEnemyCommander::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AEnemyCommander::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AEnemyCommander::Register(AActor* Enemy)
{
	if (allEnemy.Contains(Enemy) || Enemy == nullptr)
		return;

	allEnemy.Add(Enemy);
}

void AEnemyCommander::Removed(AActor* Enemy)
{
	if (allEnemy.Contains(Enemy) == false || Enemy == nullptr)
		return;

	allEnemy.Remove(Enemy);
}

//bool AEnemyCommander::RequestChasing(AActor* enemy)
//{
//	if (chaserNum >= maxChaser)
//		return false;
//}

