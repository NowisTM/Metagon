#ifndef _MainMenu_hpp
#define _MainMenu_hpp

#include "Main.hpp"

namespace RPG {
	namespace MainMenu {
		enum DLL_API State {
			Game,
			Options,
			Credits,
			Quit,
		};
	}

	DLL_API Main::State MainMenuLoop();
}

#endif //_MainMenu_hpp