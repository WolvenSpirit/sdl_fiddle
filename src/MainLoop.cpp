#include "MainLoop.h"
#include <SDL.h>
#include <iostream>
using namespace std;

MainLoop::MainLoop()
{
    quit = false;
}

bool MainLoop::run()
{
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
                    cout << "LEFT";
                    break;
                case SDLK_RIGHT:
                    cout << "RIGHT";
                    break;
                case SDLK_UP:
                    cout << "UP";
                    break;
                case SDLK_DOWN:
                    cout << "DOWN";
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
