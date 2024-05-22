#include <iostream>
#include <string>
/*
class Log
{
public:
	enum Level
	{
		LevelError = 0, LevelWarning, LevelInfo
	};

private:
	Level m_LogLevel = LevelInfo;

public:
	void SetLevel(Level level)
	{
		m_LogLevel = level;
	}

	void Error(const char* message)
	{
		if(m_LogLevel >= LevelError)
			std::cout << "[Error] :" << message << std::endl;
	}

	void Warn(const char* message)
	{
		if (m_LogLevel >= LevelWarning)
			std::cout << "[Warning] :" << message << std::endl;
	}

	void Info(const char* message)
	{
		if (m_LogLevel >= LevelInfo)
			std::cout << "[Info] :" << message << std::endl;
	}
};


int main()
{
	Log log;
	log.SetLevel(Log::LevelWarning);
	log.Warn("Hello!");
	log.Error("Hello!");
	log.Info("Hello!");
	std::cin.get();
}
*/

/*
struct Entity
{
	static int x, y;

	void Print()
	{
		std::cout << x << ", " << y << std::endl;
	}
};

int Entity::x;
int Entity::y;


int main()
{
	Entity e;
	e.x = 2;
	e.y = 3;

	Entity e1;
	//e1.x = 5;
	//e1.y = 8;
	Entity::x = 5;
	Entity::x = 8;

	e.Print();
	e1.Print();
	std::cin.get();
}*/
/*
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
*/
/*
class Player : public Entity
{
public:
	const char* Name;

	void PrintName()
	{
		std::cout << Name << std::endl;
	}
};*/

/*class Printable
{
public:
	virtual std::string GetClassName() = 0;
};

class Entity : public Printable
{
public:
	virtual std::string GetName() { return "Entity"; }
	
	std::string GetClassName() override { return "Entity"; }
};

class Player : public Entity
{
private:
	std::string m_Name;

public:
	Player(const std::string& name)
		: m_Name(name) {}

	std::string GetName() { return m_Name; }

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
	//PrintName(e);

	Player* p = new Player("Kivtas");
	//PrintName(p);

	Print(e);
	Print(p);

	//Entity* entity = p;
	//PrintName(entity);

	std::cin.get();
}*/

/*
class Example
{
public:
	Example()
	{
		std::cout << "Created Entity" << std::endl;
	}

	Example(int x)
	{
		std::cout << "Created Entity with " << x << std::endl;
	}
};

class Entity
{
private:
	Example example;
	
public:
	Entity()
		: example(7)
	{
		//example = Example(7);
	}
};

int main()
{
	Entity e;

	std::cin.get();
}*/

/*
class Entity
{
private:
	std::string m_Name;
	int m_Age;

public:
	Entity(const std::string& name)
		: m_Name(name), m_Age(-1) {}

	Entity(int age)
		: m_Name("Unknow"), m_Age(age) {}
	
};

void PrintEntity(const Entity& entity)
{

}

int main()
{
	Entity e1 = std::string("dfdsf");
	Entity e2 = 4;

	std::cin.get();
}
*/

struct Vector2
{
	float x, y;

	Vector2(float X, float Y)
		: x(X), y(Y) {}

	Vector2 Add(const Vector2& other) const
	{
		return Vector2(x + other.x, y + other.y);
	}

	Vector2 operator+(const Vector2& other) const
	{
		return Add(other);
	}
	Vector2 Multiply(const Vector2& other) const
	{
		return Vector2(x * other.x, y * other.y);
		
	}

	Vector2 operator*(const Vector2& other) const
	{
		return Multiply(other);
};

int main()
{
	Vector2 position(4.0f, 5.0f);
	Vector2 speed(0.5f, 1.0f);
	Vector2 powerUp(0.1f, 1.0f);

	Vector2 result = position.Add(speed.Multiply(powerUp));

	Vector2 result2 = position + speed * powerUp;
	std::cin.get();
}