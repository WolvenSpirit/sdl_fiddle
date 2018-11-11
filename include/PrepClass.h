#ifndef PREPCLASS_H
#define PREPCLASS_H
#include <SDL.h>
#include "SurfaceLoader.h"
#include "MainLoop.h"

class PrepClass: public SurfaceLoader
{
    public:
        const int SCR_WIDTH;
        const int SCR_HEIGHT;
        SDL_Window* window;
        SDL_Surface* screenSurface;

        PrepClass();
        ~PrepClass();

        start_sdl();
        refresh();
        SDL_Surface* running_surface;

    protected:

    private:
};

#endif // PREPCLASS_H
