#include "System.h"
#include "Constants.h"
#include <iostream>

namespace cwing {
	System::System() {
		SDL_Init(SDL_INIT_EVERYTHING);
		width = 900;
		height = 600;
		background = "hor_pong_court.png";
		win = SDL_CreateWindow("Game", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, width, height, 0);
		ren = SDL_CreateRenderer(win, -1, 0);
		tex = IMG_LoadTexture(ren, (constants::gResPath + background).c_str()); 
		TTF_Init();
	}

	System::~System() {
		std::cout << "System dest" << std::endl;
		SDL_DestroyWindow(win);
		SDL_DestroyRenderer(ren);
		SDL_DestroyTexture(tex);
		TTF_Quit();
		SDL_Quit();
	}

	SDL_Renderer* System::getRen() const {
		return ren;
	}

	const int System::getWidth() const {
		return width;
	}

	const int System::getHeight() const {
		return height;
	}

	void System::drawSysBG() {
		SDL_RenderCopy(ren, tex, NULL, NULL);
	}

	System sys;
}
