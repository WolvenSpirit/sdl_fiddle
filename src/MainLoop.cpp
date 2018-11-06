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
            if( inputEvent.type == SDL_QUIT )
            {
                cout << &inputEvent;
                quit = true;
            }
        }
    }
}
