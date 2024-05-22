#include <iostream>

class Log
{
public:
	enum Level
	{
		LevelError = 0, LevelWarning, LevelInfo
	};

private:
	Level m_logLevel = LevelInfo;

public:
	void SetLevel(Level level)
	{
		m_logLevel = level;
	}

	void  Error(const char* message)
	{
		if (m_logLevel >= LevelError)
			std::cout << "[ERROR]: " << message << std::endl;
	}

	void  Warn(const char* message)
	{
		if (m_logLevel >= LevelWarning)
			std::cout << "[WARNING]: " << message << std::endl;
	}

	void  Info(const char* message)
	{
		if (m_logLevel >= LevelInfo)
			std::cout << "[INFO]: " << message << std::endl;
	}
};

int main()
{
	Log log;
	log.SetLevel(Log::LevelError);
	log.Warn("Hello!");
	log.Error("Hello!");
	log.Info("Hello!");
	std::cin.get();
}