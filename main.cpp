#include <arm_neon.h>
#include <iostream>
#include <SDL.h>
#include <cstdint>
#include <vector>

using namespace std;

typedef int8_t i8;
typedef int16_t i16;
typedef int32_t i32;
typedef uint32_t u32;
typedef vector<i16> vi;
typedef float32_t f32;
typedef float64_t f64;

#define HEIGHT 700
#define WIDTH 900
#define MAPHEIGHT 12
#define MAPWIDTH 12
#define COLOR_WHITE 0xffffffff
#define COLOR_YELLOW 0xfffff00
#define CELL_SIZE 50

i32 world_map[MAPHEIGHT][MAPWIDTH] = {
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1},
    {1, 1, 1, 1, 0, 0, 1, 1, 0, 0, 0, 1},
    {1, 1, 1, 1, 0, 0, 1, 0, 0, 0, 0, 1},
    {1, 1, 1, 1, 0, 0, 1, 0, 0, 0, 0, 1},
    {1, 1, 1, 1, 0, 0, 0, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 0, 0, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 0, 0, 0, 0, 1, 1, 1},
    {1, 1, 1, 1, 1, 0, 0, 0, 0, 1, 1, 1},
    {1, 1, 1, 1, 1, 0, 0, 0, 0, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
};

struct Player {
    i32 x;
    i32 y;
    f32 fov_angle;
};

Player player = {10, 10, 90};

void DrawPlayer(SDL_Surface *psurface, Player player){
    SDL_Rect player_rect = {player.x, 
                            player.y, 
                            50, 50};
    SDL_FillRect(psurface, &player_rect, COLOR_YELLOW);
}

void DrawWall(SDL_Surface *psurface) {
}

void ShootRay(Player player, ){

}

void ProjectionVector(Player player, double angle) {

}

void DrawGrid(SDL_Surface *psurface) {

}

int main(int argc, char* argv[]) {
    cout << "Hello DOOM Raycasting" << "\n"; 
    f32 pos_player_x = 10;
    f32 pos_player_y = 12;
    f32 dir_player_x = -1;
    f32 dir_player_y = 0

    SDL_Init(SDL_INIT_VIDEO); 
    SDL_Window *pwindow = SDL_CreateWindow(
            "Raycasting", 
            SDL_WINDOWPOS_CENTERED, 
            SDL_WINDOWPOS_CENTERED, 
            WIDTH, HEIGHT, 0
            );

    SDL_Surface *psurface = SDL_GetWindowSurface(pwindow);
    
    SDL_Event event;
    bool running = true;
    while (running) {
        while (SDL_PollEvent(&event)) {
            if (event.type == SDL_QUIT) running = false;
        }
    
        DrawGrid()
        DrawPlayer(psurface, player);
        SDL_UpdateWindowSurface(pwindow);


    }
    
    SDL_DestroyWindow(pwindow);
    SDL_Quit();
    return 0;
}


