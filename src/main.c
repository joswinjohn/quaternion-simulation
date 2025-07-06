#include <stdio.h>
#include <SDL2/SDL.h>

int main()
{
    if (SDL_Init(SDL_INIT_VIDEO) > 0)
    {
        printf("SDL_Init failed with error: %s\n", SDL_GetError());
        return EXIT_FAILURE;
    }

    printf("SDL2 initialized\n"); 

    SDL_Window *window = SDL_CreateWindow("SDL2 Window",
                                          SDL_WINDOWPOS_CENTERED,
                                          SDL_WINDOWPOS_CENTERED,
                                          680, 480,
                                          0);

    if(!window)
    {
        printf("SDL_Window failed with error: %s\n", SDL_GetError());
        return -1;
    }

    SDL_Surface *window_surface = SDL_GetWindowSurface(window);

    if(!window_surface)
    {
        printf("SDL_Surface failed with error: %s\n", SDL_GetError());
        return -1;
    }

    SDL_UpdateWindowSurface(window);

    SDL_Delay(5000);

    SDL_Quit();

    return EXIT_SUCCESS;
}
