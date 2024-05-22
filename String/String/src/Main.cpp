#include <iostream>
#include <string>


void PrintString(const std::string& string)
{
	std::cout << string << std::endl;
}

int main()
{
	
	//const char* name = "Satvik";
	
	//char name2[7] = {'T', 'i', 'w', 'a', 'r', 'i', '\0'};

	std::string name = std::string("Satvik") + "Tiwari";
	//name += "Tiwari";
	PrintString(name);
	bool contains = name.find("ri") != std::string::npos;

	//std::cout << name << std::endl;
	//std::cout << name2 << std::endl;

	std::cin.get();
}