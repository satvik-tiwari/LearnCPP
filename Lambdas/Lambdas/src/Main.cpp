#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>

//void ForEach(const std::vector<int>& values, void(*func)(int)) //error because raw function pointer
//{
//	for (int value : values)
//		func(value);
//}

void ForEach(const std::vector<int>& values, const std::function<void(int)> func)
{
	for (int value : values)
		func(value);
}

int main()
{
	std::vector<int> values = { 1, 6, 3, 4 };

	auto it = std::find_if(values.begin(), values.end(), [](int value) { return value > 3; });

	std::cout << *it << std::endl;

	int a = 5;

	//auto lambda = [=](int value) mutable { a = 7; std::cout << "Value : " << value << std::endl; };
	auto lambda = [=](int value) mutable { a = 7; std::cout << "Value : " << a << std::endl; };

	ForEach(values, lambda);


	std::cin.get();
	
	return 0;
}
