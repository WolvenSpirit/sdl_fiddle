#include "PrepClass.h"
#include "MainLoop.h"
#include <stdio.h>
#include <iostream>
#include <SDL.h>
using namespace std;

PrepClass::PrepClass()
:   SCR_WIDTH(350), // initializing the constants
    SCR_HEIGHT(350)
{
        //construct ...
        window = NULL;
        screenSurface = NULL;
}

PrepClass::start_sdl()
{
    // Start with the subsystems we want to initialize.
    if(SDL_Init(SDL_INIT_VIDEO) < 0)
    {
        cout << "Looks like SDL failed to init.. \n" << SDL_GetError();
    }
    else
    {
        window = SDL_CreateWindow("SDL test ...", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, SCR_WIDTH, SCR_HEIGHT, SDL_WINDOW_SHOWN);

        // Catch fail to render window
        if(window == NULL)
        {
            cout << SDL_GetError();
        }
        else
        {
            screenSurface = SDL_GetWindowSurface( window );

            // hexadecimal colors, explore codes on mathsisfun dot com/hexadecimal-decimal-colors dot html
            // the NULL inside SDL_FillRect is for SDL_Rect, we don't have any.
            SDL_FillRect( screenSurface, NULL , SDL_MapRGB( screenSurface->format, 0x8D, 0x9F, 0x5D) );

            SDL_UpdateWindowSurface( window );

            int milisecondsVar = 3000;

            SDL_Delay( milisecondsVar );
        }
    }
}

PrepClass::~PrepClass()
{
    // Destroy window with the destructor method of PrepClass

            SDL_DestroyWindow( window );

            SDL_Quit();
}
