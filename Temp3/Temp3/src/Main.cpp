#include <iostream>
#include<string>

class Entity
{
private:
	std::string m_String;
	int m_Marks;

public:
	Entity(const std::string& string)
		: m_String(string), m_Marks(-1) {}

	Entity(int marks)
		: m_String("Unknown"), m_Marks(marks) {}

};

int main()
{
	Entity entity1("Kivtas");
    Entity entity2(56);
    Entity entity3 = 56;
	Entity entity4 = "Kivtas";  //compilation error
	Entity entity5 = std::string("Kivtas");
	
	std::cin.get();
}