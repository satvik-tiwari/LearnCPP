#include <iostream>
//#include "Log.h"
#define LOG(x) std::cout << x << std::endl


//void Increment(int* value)
//{
//	(*value)++;
//}

void Increment(int& value)
{
	value++;
}

int main()
{
	/*for (int i = 0; i < 5; i++)
	{
		if ((i + 1) % 2 == 0)
			break;
		Log("Hello World");

		std::cout << i << std::endl;
	}*/

	//int var = 8;
	//int* ptr = &var;
	//*ptr = 10;
	//LOG(var);

	/*char* buffer = new char[8];
	memset(buffer, 0, 8);

	char** ptr = &buffer;*/


	//int a = 5;
	//int& ref = a;
	////ref = 2;
	//Increment(&a);


	/*int a = 5;
	Increment(a);
	LOG(a);*/

	int a = 5;
	int b = 6;

	int* ref = &a;
	*ref = 2;

	ref = &b;
	*ref = 7
		;

	LOG(a);
	LOG(b);

	//delete[] buffer;
	std::cin.get();
}