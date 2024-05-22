#include <iostream>

template<typename T>
void Print(T value)
{
	std::cout << value << std::endl;
}

template<typename T, int N>
class Array
{
private:
	T m_Array[N];

public:
    int GetSize() const { return N; }
};

/*void Print(std::string value)
{
	std::cout << value << std::endl;
}

void Print(float value)
{
	std::cout << value << std::endl;
}*/

int main()
{
	Print(5);
	Print("Hello");
	Print(6.0f);

	Array<int, 5> array;
	std::cout << array.GetSize() << std::endl;

	std::cin.get();

	return 0;
}