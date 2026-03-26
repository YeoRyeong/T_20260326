#include <iostream>
#include "Engine.h"
#include "World.h"
#include "Actor.h"
#include "Player.h"
#include "Monster.h"

#include <fstream>

using namespace std;

int main()
{
	//AActor* Actor = new APlayer();
	//Actor->Render();

	GEngine->GetInstance();
	//UEngine* MyEngine = UEngine::GetInstance();

	GEngine->GetWorld()->Load("Map.txt");

	GEngine->Run();

	delete GEngine;

	return 0;
}

/*class Singleton
{

private:
	Singleton()
	{

	}
	static Singleton* Instance; // 전역으로 사용

public:
	static Singleton* GetInstance()
	{
		if(Instance == nullptr)
		{
			Instance = new Singleton();
		}
		return Instance;
	}
};

Singleton* Singleton::Instance = nullptr;

int main()
{
	Singleton::GetInstance();

	return 0;
}*/

/*int main()
{
	ifstream MapStream("Map.txt");
	
	char Data;
	int Y = 0;

	while (!MapStream.eof())
	{
		string Line;
		getline(MapStream, Line);
		MapStream.read(&Data, 1);
		for(int X = 0; X < Line.length(); ++X)
		{
		cout << Line[X];
		}
		cout << endl;
	}

	return 0;
}*/

































/*
int main()
{
	AActor* Monster = new APlayer();
	AActor* MyActor = new AActor();

	//Down Casting, 동적 변환, 
	APlayer* Player = dynamic_cast<APlayer*>(MyActor);

	if (Player)
	{
		Player->ApplyDamage(Monster);
	}

	//모든 액터를 어찌한다.

	delete MyActor;

	return 0;
}*/



















/*int main()
{

	// std::string S1 = "Hello";
	// std::string S2("World");
	// 
	// std::string S3 = S1 + " " + S2;

	//S1 + S2; // 우리가 쓰는 기호지만 컴퓨터는 모름.
	//S1.operator+(); // 

	//cout << S3 << endl;

	//String S5 = "World";

	//String S6 = S4 + S5; // +에서 에러가 생김 operator를 따로 만듬.
	//cout << S6.GetPointer() << endl; // 출력에서 에러가 생김.

//	char Message[1024] = "Hello World";
	//String S3(S1.operator+(" ") + S2);
	String S1 = "Hello";  
	String S2 = "Hello";


	//String S3 = S1 + " " + S2;
	String S3(S1.operator+(" ").operator+(S2));

	cout << S3.GetPointer() << endl;

	cout << (S1 == S2) << endl;
	return 0;
}*/