#include "SurfaceLoader.h"
#include <SDL.h>
#include <stdio.h>
#include "MainLoop.h"
#include <iostream>
#include <string>
using namespace std;

SurfaceLoader::SurfaceLoader()
{
    ImageSurface = NULL;
}

SurfaceLoader::~SurfaceLoader()
{
    SDL_FreeSurface(ImageSurface);
}

SurfaceLoader::loadImage(string img_path)
{
    ImageSurface = SDL_LoadBMP(img_path.c_str());
    if(ImageSurface == NULL)
    {
        cout << "Can't load image from path to the Surface: " << SDL_GetError();
        return false;
    }
    else
    {
        cout << "Image loaded to surface" << endl;
        return true;
    }
}
