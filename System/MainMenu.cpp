#include "stdafx.h"

#include "MainMenu.hpp"

namespace RPG {
	Main::State MainMenuLoop() {
		MainMenu::State State = MainMenu::State::Game;
		do {
			switch (State) {
				case MainMenu::State::Game:
					//State = Game();
					break;
				case MainMenu::State::Options:
					//State = Options();
					break;
				case MainMenu::State::Credits:
					//State = Credits();
					break;
				case MainMenu::State::Quit:
				default:
					//State = Quit();
					break;
			}
		} while (State != MainMenu::State::Quit);

		return Main::State::Quit;
	}
}