#include <iostream>

class Entity
{
public:
	int x;

	void Print() const
	{
		std::cout << "Hello!" << std::endl;
	}
};

class ScopedPtr
{
private:
	Entity* m_Obj;

public:
	ScopedPtr(Entity* entity)
		: m_Obj(entity) {}

	~ScopedPtr()
	{
		delete m_Obj;
	}

	Entity* operator->()
	{
		return m_Obj;
	}

	const Entity* operator->() const
	{
		return m_Obj;
	}
};

int main()
{
	/*Entity e;
	e.Print();
	
	Entity* ptr = &e;  //address of e
	Entity& entity = *ptr;   //entity reference created
	(*ptr).Print();
	ptr->Print();
	*/

	/*ScopedPtr entity = new Entity();
	entity->Print();*/


	const ScopedPtr entity = new Entity();
	entity->Print();
	std::cin.get();
}