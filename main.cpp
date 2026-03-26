#include <iostream>
#include "string.h"

using namespace std;

int main()
{

	string S1 = "Hello";
	string S2("World");

	string S3 = S1 + " " + S2;

	cout << S3;

	String S4("Hello"); // 생성자가 없어서 에러가 남 

	char Message[1024] = "Hello World";

	return 0;
}