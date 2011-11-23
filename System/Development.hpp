#ifndef _Development_hpp
#define _Development_hpp

namespace RPG {
	#ifdef _DEBUG
		#define RPGDEBUG true
	#else
		#define RPGDEBUG false
	#endif
}

#ifdef DLL_EXPORTS
	#define DLL_API __declspec(dllexport)
#else
	#define DLL_API __declspec(dllimport)
#endif

#endif //_Development_hpp