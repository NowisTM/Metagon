#include "stdafx.h"
#include "Exception.hpp"

namespace RPG {
	Exception::Exception(const std::exception& e) : myMsg(e.what()), myFile(""), myLine(0) {
	}

	Exception::Exception(const std::string& msg) : myMsg(msg), myFile(""), myLine(0) {
	}

	Exception::Exception(const std::string& msg, const std::string& file, unsigned int line) : myMsg(msg), myFile(file), myLine(line) {
	}

	/*Exception::Exception(unsigned int errnr, const std::string& file, unsigned int line) : myMsg(getMsg(errnr)), myFile(file) myLine(line) {
	}*/

	const char* Exception::what() const {
		std::stringstream sstream;
		sstream << this->myMsg 
				<< ((this->myFile != "") ? (std::string(" in file ") += this->myFile) : "") 
				<< ((this->myLine != 0) ? (std::string(" line: ") += this->myLine) : "");
		return sstream.str().c_str();
	}
}