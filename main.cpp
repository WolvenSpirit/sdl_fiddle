#include <stdio.h>
#include <iostream>
#include <SDL.h>
#include "PrepClass.h"
#include "SurfaceLoader.h"
#include "MainLoop.h"

using namespace std;

int main(int argc, char *args[])
{
    PrepClass InitObj;
    InitObj.start_sdl();
    if(!InitObj.loadImage())
    {
        cout << SDL_GetError();
    }
    else
    {
        cout << "Image loaded.";
        SDL_BlitSurface(InitObj.ImageSurface, NULL, InitObj.screenSurface, NULL);
        SDL_UpdateWindowSurface(InitObj.window);
        //SDL_Delay(3000);
        MainLoop game;
        game.run();
    }
    return 0;
}
