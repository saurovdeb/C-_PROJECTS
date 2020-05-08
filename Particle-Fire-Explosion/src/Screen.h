/*
 * Screen.h
 *
 *  Created on: 28-Apr-2020
 *      Author: saurov
 */

#ifndef SCREEN_H_
#define SCREEN_H_
#include<SDL2/SDL.h>

class Screen {
public:
 const static int SCREEN_WIDTH=800;
 const static int SCREEN_HEIGHT=600;
private:
	SDL_Window *m_window;
	SDL_Renderer *m_renderer;
	SDL_Texture *m_texture;
	Uint32 *m_buffer1;
	Uint32 *m_buffer2;

public:
	Screen();
	bool Init();
	void update();
	void SetPixel(int x, int y, Uint8 red, Uint8 green, Uint8 blue);
	bool processEvents();
	void close();
	void boxblur();

};
#endif /* SCREEN_H_ */
