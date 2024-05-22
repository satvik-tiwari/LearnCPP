#include <iostream>

class String
{
private:
	char* m_Buffer;
	unsigned int m_Size;

public:
	String(const char* string)
	{
		m_Size = strlen(string);
		m_Buffer = new char[m_Size + 1];
		memcpy(m_Buffer, string, m_Size);
		m_Buffer[m_Size] = 0;
	}

	/*
	String(const String& other)
		: m_Buffer(other.m_Buffer), m_Size(other.m_Size) {} 

	*/

	/*
	String(const String& other)
	{
		memcpy(this, &other, sizeof(String));
	}
	*/

	String(const String& other)
		: m_Size(other.m_Size)
	{
		m_Buffer = new char[m_Size + 1];
		memcpy(m_Buffer, other.m_Buffer, m_Size + 1);  
		std::cout << "String Copied!" << std::endl;
	}

	~String()
	{
		delete[] m_Buffer;
	}

	char& operator[](int index)
	{
		return m_Buffer[index];
	}

	friend std::ostream& operator<<(std::ostream& ostream,
		const String& string);
};

std::ostream& operator<<(std::ostream& ostream,
	const String& string)
{
	return ostream << string.m_Buffer;
}

void PrintString(const String& string)
{
	std::cout << string << std::endl;
}

int main()
{
	String string = "Kivtas";
	String second = string;

	second[1] = 'z';

	//std::cout << string << std::endl;
	//std::cout << second << std::endl;

	PrintString(string);
	PrintString(second);

	std::cin.get();
}