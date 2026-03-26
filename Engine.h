#pragma once

#include <vector>

class AActor;
class UWorld;

class UEngine
{
protected:
	UEngine();

	static UEngine* Instance;

public:
	~UEngine();

	static UEngine* GetInstance()
	{
		if (Instance == nullptr)
		{
			Instance = new UEngine();
		}

		return Instance;
	}



	void Init();

	void Term();

	void Run();

	inline UWorld* GetWorld()
	{
		return World;
	}

	static int KeyCode;

protected:
	void Input();
	void Tick();
	void Render();

	class UWorld* World;

	int bIsRunning : 1; // int형중에 1비트만 사용하겠다. b를 쓰면 boolean
};

#define GEngine			UEngine::GetInstance()