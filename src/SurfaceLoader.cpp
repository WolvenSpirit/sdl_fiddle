#include "SurfaceLoader.h"
#include <SDL.h>
#include <stdio.h>
#include "MainLoop.h"
#include <iostream>

SurfaceLoader::SurfaceLoader()
{
    ImageSurface = NULL;
}
SurfaceLoader::~SurfaceLoader()
{
    SDL_FreeSurface(ImageSurface);
}
SurfaceLoader::loadImage()
{
    bool outcome;

    ImageSurface = SDL_LoadBMP("C:\\Users\\Home\\Downloads\\gladiator-1931077_640.bmp");
    if(ImageSurface == NULL)
    {
        outcome = false;
    }
    else
    {
        outcome = true;
    }
    return outcome;
}
