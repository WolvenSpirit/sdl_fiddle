#include <stdio.h>
#include <iostream>
#include <SDL.h>
#include "PrepClass.h"
#include "SurfaceLoader.h"
#include "MainLoop.h"

using namespace std;

void run();
PrepClass InitObj;

int main(int argc, char *args[])
{

    InitObj.start_sdl();
    InitObj.loadImage("C:\\Users\\Home\\Downloads\\gladiator-1931077_640.bmp");
    InitObj.refresh();
        //SDL_Delay(3000);
    run();

    return 0;
}

void run()
{
    SDL_Event inputEvent;
    bool quit = false;

    while(!quit) // keeps looping if false.
    {
        while( SDL_PollEvent(&inputEvent) != 0 )
        //SDL_PollEvent with the input parameter is the main loop, we wrap it into a loop with flag to control it.
        {

        // capture the key events while in loop ...
        if(SDL_KEYDOWN)
        {
            if(inputEvent.type)
            {
                // SDL_Event::key.keysym.sym returns key event type, run matching loops against SDLK_* predefined constants...
                switch(inputEvent.key.keysym.sym)
                {
                case SDLK_LEFT:
                    cout << "<";
                    break;
                case SDLK_RIGHT:
                    cout << ">";
                    break;
                case SDLK_UP:
                    cout << "^";
                    InitObj.loadImage("C:\\Users\\Home\\Downloads\\knight-3066217_640.bmp");
                    InitObj.refresh();
                    break;
                case SDLK_DOWN:
                    cout << "v";
                    break;
                }
            }

        }

        //Capture the x-ing/close window event
        if( inputEvent.type == SDL_QUIT )
        {
                cout << &inputEvent; // logs the address
                quit = true;
        }


    }
}
}
