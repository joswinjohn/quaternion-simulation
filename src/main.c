#include <stdio.h>
#include <SDL2/SDL.h>

int main()
{
  if (SDL_Init(SDL_INIT_EVERYTHING) > 0)
  {
    printf("SDL_Init failed with error: %s\n", SDL_GetError());
    return EXIT_FAILURE;
  }

  char greetings[] = "Hello SDL2!";
  printf("%s\n", greetings);

  SDL_Quit();

  return EXIT_SUCCESS;
}
