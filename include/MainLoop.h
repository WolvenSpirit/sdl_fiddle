#ifndef MAINLOOP_H
#define MAINLOOP_H
#include <SDL.h>

class MainLoop
{
    public:
        MainLoop();
        bool run();
        bool quit;
        // the event handler, check .type for input.
        SDL_Event inputEvent;
    protected:

    private:
};

#endif // MAINLOOP_H
