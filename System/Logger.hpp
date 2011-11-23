#ifndef _Logger_hpp
#define _Logger_hpp

#include <string>
#include <fstream>

#include "Development.hpp"

namespace RPG {
	namespace Log {
		enum Level {
			All,
			Warning,
			Error,
			Max,
		};

		static std::string LevelString[Log::Level::Max] = { "", "Warning", "Error" };
	}

	class DLL_API Logger {
	public:
		Logger(const std::string& filename = "stdout.log");
		Logger(Log::Level level, const std::string& filename = "stdout.log");
		~Logger();

	private:
		Log::Level myLevel;
		std::ofstream myFile;

	public:
		Logger* log(const std::string& msg, Log::Level level = Log::Level::All);
	};
}

#endif //_Logger_hpp