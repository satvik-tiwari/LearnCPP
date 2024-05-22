#include <iostream>
#include <string>

class Printable
{
public:
	virtual std::string GetClassName() = 0; //interface or pure virtual function
};

class Entity : public Printable
{
public:
	virtual std::string GetName() { return "Entity"; }  //virtual function

	std::string GetClassName() override { return "Entity"; }
		
};


class Player : public Entity
{
private:
	std::string m_Name;

public:
	Player(const std::string& name)
		: m_Name(name) {}

	std::string GetName() override { return m_Name; }
	std::string GetClassName() override { return "Player"; }
};

void PrintName(Entity* entity)
{
	std::cout << entity->GetName() << std::endl;
}

void Print(Printable* obj)
{
	std::cout << obj->GetClassName() << std::endl;
}

int main()
{
	Entity* e = new Entity();
	//std::cout << e->GetName() << std::endl;
	//PrintName(e);
	Print(e);
	

	Player* p = new Player("Satvik");
	//std::cout << p->GetName() << std::endl;
	//PrintName(p);
	Print(p);

	/*Entity* entity = p;
	std::cout << entity->GetName() << std::endl;*/
	int a = 7;
	int* ptr = NULL;
	ptr = &a;

	std::cin.get();
}