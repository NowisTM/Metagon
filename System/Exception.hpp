#ifndef _Exception_hpp
#define _Exception_hpp

#include "Development.hpp"
#include <exception>
#include <string>
#include <sstream>
#include <iostream>

namespace RPG {
	class DLL_API Exception {
	public:
		Exception(const std::exception& e);
		Exception(const std::string& msg);
		Exception(const std::string& msg, const std::string& file, unsigned int line);
		//Exception(unsigned int errnr, const std::string& file, unsigned int line);

	private:
		const std::string myMsg;
		const std::string myFile;
		unsigned int myLine;

	public:
		friend std::ostream& operator<<(std::ostream& out, const Exception& e);

	public:
		virtual const char* what() const;
	};

	std::ostream& operator<<(std::ostream& out, const Exception& e) {
		return out << e.what();
			/*<< e.myMsg 
				<< ((e.myFile != "") ? (std::string(" in file ") += e.myFile) : "") 
				<< ((e.myLine != 0) ? (std::string(" line: ") += e.myLine) : "");*/
	}
}

#endif //_Exception_hpp