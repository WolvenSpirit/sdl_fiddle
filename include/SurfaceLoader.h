#ifndef SURFACELOADER_H
#define SURFACELOADER_H
#include <SDL.h>
#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;

class SurfaceLoader
{
    public:

        SurfaceLoader();
        ~SurfaceLoader();
        loadImage(string img_path);
        SDL_Surface* ImageSurface;
};

#endif // SURFACELOADER_H
