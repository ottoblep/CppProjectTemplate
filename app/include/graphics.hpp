#include <SDL.h>

namespace graphics{
    
    void init_window(SDL_Window** window, SDL_Renderer** renderer);
    void draw_circle(SDL_Renderer * renderer, int32_t centreX, int32_t centreY, int32_t radius);
    void draw(SDL_Renderer * renderer);

}