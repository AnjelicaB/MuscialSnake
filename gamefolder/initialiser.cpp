/**
 * This file will be used to initialise all necessary modules and libraries
 * such as sdl2
 * 
 * Creators: Bian, Anjelica; Ketterer, Em
*/

#include <iostream>
#include <SDL2/SDL.h>
#include <SDL_image.h>

/**
 * initialises SDL and IMG 
 * returns 1 if either of the init calls fail
*/

int main(){
    if(SDL_Init(SDL_INIT_EVERYTHING) < 0) {
        printf("SDL_Init failed: %s\n", SDL_GetError());
        return 1;
    }

    if(IMG_Init(IMG_INIT_PNG) < 0) {
        printf("IMG_Init failed: %s\n", IMG_GetError());
        return 1;
    }
}