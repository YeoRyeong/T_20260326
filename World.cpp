#include "World.h"
#include "Actor.h"
#include "Player.h"
#include "Monster.h"
#include "Wall.h"
#include "Goal.h"
#include "Floor.h"

UWorld::UWorld()
{
}

UWorld::~UWorld()
{
	for (auto Actor : Actors)
	{
		delete Actor;
	}

	Actors.clear();
}

void UWorld::Load(std::string MapName) {
	// 파일 읽어서 액터 생성
	SpawnActor<APlayer>();
	SpawnActor<AMonster>()->SetActorLocation(4, 5);
	SpawnActor<AGoal>()->SetActorLocation(8, 8);
	SpawnActor<AWall>()->SetActorLocation(0, 0);
	SpawnActor<AFloor>()->SetActorLocation(3, 5);
	
	
	// 파일 읽어서 생성
	// fopen
	
	// ifstream
}

void UWorld::Tick()
{
	for (auto Actor : Actors)
	{
		Actor->Tick();
	}
}

void UWorld::Render()
{
	for (auto Actor : Actors)
	{
		Actor->Render();
	}
}