#pragma once
#include <vector>

class UWorld
{
public:
	UWorld();
	virtual ~UWorld();

	template<typename T>
	AActor* SpawnActor()
	{
		AActor* NewActor = new T;
		Actors.push_back(NewActor);

		return nullptr;
	}

	inline std::vector<class AActor*>& GetActors()
	{
		return Actors;
	}

protected:
	std::vector<class AActor*> Actors;
};

