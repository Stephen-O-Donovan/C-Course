//============================================================================
// Name        : main.cpp
// Author      : 
// Version     :
// Copyright   : 
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <stdio.h>
#include <SDL2/SDL.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include "Screen.h"
#include "Swarm.h"
using namespace std;
using namespace sod;

int WinMain() {

	srand(time(NULL));

	Screen screen;
	if(!screen.init()){
		cout << "Error initialising SDL" << endl;
	}

	Swarm swarm;

	while (true) {
		// Update particles
		// Draw particles

		int elapsed = SDL_GetTicks();

		swarm.update(elapsed);

		unsigned char green = (1 + sin(elapsed * 0.0001)) * 128;
		unsigned char red = (1 + sin(elapsed * 0.0002)) * 128;
		unsigned char blue = (1 + cos(elapsed * 0.0003)) * 128;

		const Particle * const pParticles = swarm.getParticles();
		for(int i = 0; i < Swarm::NPARTICLES; i++){
			Particle particle = pParticles[i];

			int x = (particle.m_x + 1) * Screen::SCREEN_WIDTH/2;
			int y = particle.m_y * Screen::SCREEN_WIDTH/2 +Screen::SCREEN_HEIGHT/2;

			screen.setPixel(x, y, red, green, blue);

		}

		screen.boxBlur();

		//Draw the screen
		screen.update();
		if(!screen.processEvents()){
			break;
		}
	}

	screen.close();

	return 0;
}

