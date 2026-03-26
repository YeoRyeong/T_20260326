#pragma once
#include <vector>

class UEngine
{
public:
	UEngine();
	~UEngine();

	void Init();

	void Term();

	void Run();
	
	tamplate<typename T>

	void SpawnActor(AActor* NewActor);
	std::vector<AActor*> GetAllActorOfClass();

protected:
	void Input();

	void Tick();

	void Render();

	std::vector<AActor*> Actors;
};

