//============================================================================
// Name        : Partical-Fire-Explotion.cpp
// Author      : SAUROV_DEB
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <SDL2/SDL.h>
#include <iostream>
#include <map>
#include<math.h>
#include<stdlib.h>
#include "Screen.h"
#include "Particle.h"
#include "Swarm.h"
using namespace std;

int main() {

	srand(time(NULL));

	Screen Display;

	Display.Init();

	Particle particle;
	Swarm swarm;

	while (true) {
		//Update pixels

		//Draw Pixels

		/*   	for (int y = 0; y < Display.SCREEN_HEIGHT; y++) {    //  TO SET THE BACKGROUND COLOUR OF THE WINDOW
		 for (int x = 0; x < Display.SCREEN_WIDTH; x++) {
		 Display.SetPixel(x, y, 255, 255, 255);
		 }
		 }
		 */
		int elapsed = SDL_GetTicks();

		swarm.update(elapsed);

		unsigned char green =
				(unsigned char) ((1 + sin(elapsed * 0.0001)) * 128);
		unsigned char red = (unsigned char) ((1 + sin(elapsed * 0.0002)) * 128);
		unsigned char blue = (unsigned char) ((1 + sin(elapsed * 0.0003)) * 128);

	  const	Particle * const pParticle = swarm.getparticle();

		for (int i = 0; i < Swarm::NPARTICLE; i++) {
			particle = pParticle[i];

			int x = (particle.m_x + 1) * Display.SCREEN_WIDTH / 2;
			int y = particle.m_y * Display.SCREEN_WIDTH / 2
					+ Display.SCREEN_HEIGHT / 2;

			Display.SetPixel(x, y, red, green, blue);

		}
	Display.boxblur();
		//Draw to screen
		Display.update();

		//Check for Message/Errors
		if (Display.processEvents() == false)
			break;
	}

	Display.close();
	return 0;
}
