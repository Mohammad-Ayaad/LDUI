#include <SDL2/SDL.h>

class Window
{
public:
	Window(const char *title, int width, int height);
	void setTitle(const char* title);
private:
	SDL_Window *window;
	SDL_Renderer *renderer;
};