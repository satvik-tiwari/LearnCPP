#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>

const char* GetName()
{
	return "Kivtas";
}

class Device {};

class DeviceManager
{
private:
	std::unordered_map<std::string, std::vector<Device*>> m_Devices;
public:
	const std::unordered_map<std::string, std::vector<Device*>>& GetDevices() const
	{
		return m_Devices;
	}
};

int main()
{
	std::vector<std::string> strings;
	strings.push_back("Apple");
	strings.push_back("Banana");

	/*for (std::vector<std::string>::iterator itr = strings.begin();
		itr != strings.end(); itr++)
	{
		std::cout << *itr << std::endl;
	}*/

	for (auto itr = strings.begin();
		itr != strings.end(); itr++)
	{
		std::cout << *itr << std::endl;
	}

	

	DeviceManager dm;
	const std::unordered_map<std::string, std::vector<Device*>>& devices = dm.GetDevices();

	//DeviceManager dm1;
	using DeviceMap = std::unordered_map<std::string, std::vector<Device*>>;
	const DeviceMap& devices1= dm.GetDevices();

	typedef std::unordered_map<std::string, std::vector<Device*>> Devicemap;
	const DeviceMap& devices2 = dm.GetDevices();

	//auto keyword
	const auto& devices3 = dm.GetDevices();

	std::cin.get();
	return 0;
}