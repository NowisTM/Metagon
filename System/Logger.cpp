#include "stdafx.h"

#include <iostream>
#include "Logger.hpp"
#include "Development.hpp"

namespace RPG {
	Logger::Logger(const std::string& filename) : myLevel(Log::Level::All) {
		try {
			myFile.open(filename.c_str(), std::ios_base::out);
		} catch (std::exception& e) {
			std::cout << "Error open file " << filename;
		}
	}

	Logger::Logger(Log::Level level, const std::string& filename) : myLevel(level) {
		try {
			myFile.open(filename.c_str(), std::ios_base::out);
		} catch (std::exception& e) {
			std::cout << "Error open file " << filename;
		}
	}

	Logger::~Logger() {
		myFile.close();
	}

	Logger* Logger::log(const std::string& msg, Log::Level level) {
		if (myLevel >= level) {
			/*switch (level) {
				case Log::Level::Warning:
					myFile << "Warning: ";
					break;
				case Log::Level::Error:
					myFile << "Error: ";
					break;
				case Log::Level::All:
					break;
			}*/
			myFile << Log::LevelString[level] << " " << msg << std::endl;
			if (RPGDEBUG)
				std::cout << Log::LevelString[level] << " " << msg << std::endl;
		}

		return this;
	}
}