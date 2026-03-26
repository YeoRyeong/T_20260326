#include <iostream>
#include "Player.h"

using namespace std;

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
}



















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