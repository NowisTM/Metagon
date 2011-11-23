#ifndef _Main_hpp
#define _Main_hpp

#include "Development.hpp"

/**
* @file		Main.hpp
*/
namespace RPG {
	/**
	* @brief	Hauptstatus des Spiels
	*/
	namespace Main {
		enum DLL_API State {
			Intro,
			MainMenu,
			Game,
			GameMenu,
			Quit,
			Destroy,
		};
	}

	/**
	* @brief	Initialisierung der Engine
	*/
	DLL_API void Init();

	/**
	* @brief	Hauptschleife
	*/
	DLL_API void MainLoop();

	/**
	* @brief	Bereinigen des Speichers
	*/
	DLL_API void Destroy();
}

#endif //_Main_hpp