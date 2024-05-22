#include <iostream>
#include <string>
#include <memory>

class Entity
{
public:
	Entity()
	{
		std::cout << "Entity Created!" << std::endl;
	}

	~Entity()
	{
		std::cout << "Entity Destroyed!" << std::endl;
	}
};


int main()
{
	{
		std::shared_ptr<Entity> e0;
		std::weak_ptr<Entity> e2;
		{
			//std::unique_ptr<Entity> entity(new Entity());
			std::unique_ptr<Entity> entity = std::make_unique<Entity>();

			std::shared_ptr<Entity> sharedEntity = std::make_shared<Entity>();

			std::weak_ptr<Entity> weakEntity = sharedEntity;
			e0 = sharedEntity;

			e2 = sharedEntity;

		}
	}
	std::cin.get();
}