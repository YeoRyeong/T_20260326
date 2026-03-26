#pragma once

#include <vector>

class AActor;
class UWorld;

class UEngine
{
public:
	UEngine();
	~UEngine();

	void Init();
	void Term();

	void Run();

	inline UWorld* GetWorld()
	{
		return World;
	}

protected:
	void Input();
	void Tick();
	void Render();

	class UWorld* World;

	int bIsRunning : 1; // int형중에 1비트만 사용하겠다. b를 쓰면 boolean
};