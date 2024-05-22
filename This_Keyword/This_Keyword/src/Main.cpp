#include <iostream>


//void PrintEntity(Entity* e);
void PrintEntity(const Entity& e);

class Entity
{
public:
	int x, y;

	Entity(int x, int y)
	{
		//Entity* e = this;

		this->x = x;
		this->y = y;

		Entity& e = *this;

		//PrintEntity(this);
		PrintEntity(*this);
	}

	int GetX() const
	{
		//const Entity* e = this;
		const Entity& e = *this;
	}
};

void PrintEntity(const Entity& e)
{

}

/*
void PrintEntity(Entity* e)
{

}
*/

int main()
{


	std::cin.get();
}