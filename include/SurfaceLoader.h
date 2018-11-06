#ifndef SURFACELOADER_H
#define SURFACELOADER_H
#include <SDL.h>

class SurfaceLoader
{
    public:
        SurfaceLoader();
        ~SurfaceLoader();
        loadImage();
        SDL_Surface* ImageSurface;
    private:
};

#endif // SURFACELOADER_H
