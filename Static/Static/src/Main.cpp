#include <iostream>

//static int a = 5;
//int main()
//{
//	std::cout << a << std::endl;
//	std::cin.get();
//}

struct Entity
{
	//static int x, y;
	int x, y;

	static void Print()
	{
		std::cout << x << "," << y << std::endl;
	}
};

//int Entity::x;
//int Entity::y;

//static void Print(Entity e;)
//{
//	std::cout << e.x << "," << e.y << std::endl;
//}

int main()
{
	Entity e;
	e.x = 2;
	e.y = 3;
	//Entity::x = 2;
	//Entity::y = 3;

	Entity e1;
	e1.x = 5;
	e1.y = 8;
	//Entity::x = 5;
	//Entity::y = 8;

	Entity::Print();
	Entity::Print();
	std::cin.get();
}