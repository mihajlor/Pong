#ifndef SYSTEM_H
#define SYSTEM_H
#include <SDL2/SDL.h>
#include <SDL2/SDL_ttf.h>
#include <SDL2/SDL_image.h>
#include <string>

namespace cwing {
	class System
	{
	public:
		System();
		~System();
		SDL_Renderer* getRen() const;
		const int getWidth() const;
		const int getHeight() const;
		void drawSysBG();
	private:
		SDL_Window* win;
		SDL_Renderer* ren;
		SDL_Texture* tex;
		std::string background;
		int width;
		int height;
	};
	
	extern System sys;
}
#endif
