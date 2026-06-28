#include <arm_neon.h>
#include <iostream>
#include <SDL.h>
#include <cstdint>
#include <vector>

using namespace std;

typedef int8_t i8;
typedef int16_t i16;
typedef uint32_t u32;
typedef vector<i16> vi;
typedef float32_t f32;
typedef float64_t f64;

#define HEIGHT 500
#define WIDTH 700
#define COLOR_WHITE 0xffffffff
#define CELL_SIZE 50
#define PLAYER_FOV 90

i16 map[5][5] = {
    {0, 0, 1, 1, 1},
    {0, 0, 0, 0, 0},
    {1, 0, 1, 0, 0},
    {1, 0, 0, 1, 0},
    {1, 0, 0, 1, 0}
};

struct Player {
    f32 x;
    f32 y;
    f32 fov_angle;
    f32 projection_vector;
};
Player player = {0, 0, 90, 0};

u32 draw_player();

int main(int argc, char* argv[]) {
    cout << "Hello DOOM Raycasting" << "\n"; 
    SDL_Init(SDL_INIT_VIDEO); 
    SDL_Window *pwindow = SDL_CreateWindow(
            "Raycasting", 
            SDL_WINDOWPOS_CENTERED, 
            SDL_WINDOWPOS_CENTERED, 
            WIDTH, HEIGHT, 0
            );

    SDL_Surface *psurface = SDL_GetWindowSurface(pwindow);
    
    draw_player();
    SDL_UpdateWindowSurface(pwindow);
        
    SDL_Event event;
    bool running = true;
    while (running) {
        while (SDL_PollEvent(&event)) {
            if (event.type == SDL_QUIT) running = false;
        }
    }
    
    SDL_DestroyWindow(pwindow);
    SDL_Quit();
    return 0;
}

u32 draw_player() {

}










