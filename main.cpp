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
    InitObj.loadImage("C:\\Users\\Home\\Downloads\\gladiator-1931077_640.bmp");
    InitObj.refresh();
        //SDL_Delay(3000);
        MainLoop game;
        game.run();

    return 0;
}
