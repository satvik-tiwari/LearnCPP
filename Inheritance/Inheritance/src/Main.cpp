#include <iostream>

class Entity
{
public:
	float X, Y;

	void Move(float xa, float ya)
	{
		X += xa;
		Y += ya;
	}

};

class Player : public Entity
{
public:
	const char* Name;

	void PrintName()
	{
		std::cout << Name << std::endl;
	}
};

int main()
{
	std::cout << sizeof(Player) << std::endl;
	
	Player player;
	player.Move(2, 2);
	player.X = 3;

	std::cin.get();
}