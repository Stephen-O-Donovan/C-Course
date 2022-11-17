//============================================================================
// Name        : SDL.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <stdio.h>
#include <SDL2/SDL.h>
using namespace std;

int WinMain() {

	const int SCREEN_WIDTH = 800;
	const int SCREEN_HEIGHT = 600;

	if (SDL_Init(SDL_INIT_VIDEO) < 0) {
		cout << "SDL_Init failed" << endl;
		return 1;
	}

	SDL_Window *window = SDL_CreateWindow("Particle Fire Explosion",
	SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, SCREEN_WIDTH,
			SCREEN_HEIGHT, SDL_WINDOW_SHOWN);

	if (window == NULL) {
		SDL_Quit();
		printf("Could not create window: %s\n", SDL_GetError());
		return 2;
	}

	SDL_Renderer *renderer = SDL_CreateRenderer(window, -1,
			SDL_RENDERER_PRESENTVSYNC);
	SDL_Texture *texture = SDL_CreateTexture(renderer, SDL_PIXELFORMAT_RGBA8888,
			SDL_TEXTUREACCESS_STATIC, SCREEN_WIDTH, SCREEN_HEIGHT);

	if(renderer == NULL){
		cout << "Could not create renderer" << endl;
		SDL_DestroyWindow(window);
		SDL_Quit();
		return 3;
	}

	if(texture == NULL){
		cout << "Could not create texture" << endl;
		SDL_DestroyRenderer(renderer);
		SDL_DestroyWindow(window);
		SDL_Quit();
		return 4;
	}

	Uint32 *buffer = new Uint32[SCREEN_WIDTH*SCREEN_HEIGHT];

	memset(buffer, 0, SCREEN_WIDTH*SCREEN_HEIGHT*sizeof(Uint32));

//	buffer[30000] = 0xFFFF0000;

	int j = 6;

	for(int i = 0; i < SCREEN_WIDTH*SCREEN_HEIGHT/j; i++){
		buffer[i] = 0x0000FF00;
	}

	for(int i = SCREEN_WIDTH*SCREEN_HEIGHT/j; i < SCREEN_WIDTH*(2*SCREEN_HEIGHT/j); i++){
		buffer[i] = 0x00FF0000;
	}

	for(int i = SCREEN_WIDTH*(2*SCREEN_HEIGHT/j); i < SCREEN_WIDTH*(3*SCREEN_HEIGHT/j); i++){
		buffer[i] = 0xFF000000;
	}

	for(int i =SCREEN_WIDTH*(3*SCREEN_HEIGHT/j); i < SCREEN_WIDTH*(4*SCREEN_HEIGHT/j); i++){
		buffer[i] = 0x824000;
	}

	for(int i = SCREEN_WIDTH*(4*SCREEN_HEIGHT/j); i < SCREEN_WIDTH*(5*SCREEN_HEIGHT/j); i++){
		buffer[i] = 0x00FF5547;
	}

	for(int i = SCREEN_WIDTH*(5*SCREEN_HEIGHT/j); i < SCREEN_WIDTH*(6*SCREEN_HEIGHT/j); i++){
		buffer[i] = 0xFF47AADD;
	}

	SDL_UpdateTexture(texture, NULL, buffer, SCREEN_WIDTH*sizeof(Uint32));
	SDL_RenderClear(renderer);
	SDL_RenderCopy(renderer, texture, NULL, NULL);
	SDL_RenderPresent(renderer);

	bool quit = false;
	SDL_Event event;

	while (!quit) {
		// Update particles
		// Draw particles
		// Check for messages/events

		while (SDL_PollEvent(&event)) {
			if (event.type == SDL_QUIT) {
				quit = true;
			}
		}

	}

	delete [] buffer;
	SDL_DestroyRenderer(renderer);
	SDL_DestroyTexture(texture);

	SDL_DestroyWindow(window);

	SDL_Quit();

	return 0;
}
