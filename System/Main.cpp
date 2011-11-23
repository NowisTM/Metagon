#include "stdafx.h"

#include "Main.hpp"
#include "MainMenu.hpp"


namespace RPG {
	void Init() {
	}

	void MainLoop() {
		Init();
		Main::State State = Main::State::Destroy;
		do {
			switch (State) {
				case Main::State::Intro:
					//State = Intro();
					break;
				case Main::State::MainMenu:
					//State = MainMenu();
					break;
			}
		} while (State != Main::State::Destroy);
		Destroy();
	}

	void Destroy() {
	}
}