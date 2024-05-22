#include <iostream>
#include <string>

class Entity
{
private:
	std::string m_Name;
	int m_Age;

public:
	Entity(const std::string& name)
		: m_Name(name) {}

	Entity(int age)
		: m_Age(age) {}
};


void PrintEntity(Entity entity)
{

}

int main()
{
	Entity a("Satvik");
	//Entity a = "Satvik";
	Entity b = 27;

	PrintEntity(27);

	PrintEntity(std::string("Satvik"));
	//PrintEntity("Satvik");
	//PrintEntity(27);


	std::cin.get();
}