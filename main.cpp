#include <iostream>
#include <SDL.h>
#include <cstdint>
#include <vector>

using namespace std;

typedef int8_t i8;
typedef int16_t i16;
typedef uint32_t u32;
typedef vector<i16> vi;

#define HEIGHT 600
#define WIDTH 400

int main() {
    cout << "Hello DOOM Raycasting" << "\n"; 
    SDL_Init(SDL_INIT_VIDEO); 
    SDL_Window *pwindow = SDL_CreateWindow("Raycasting", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, HEIGHT, WIDTH,0); 
    SDL_Delay(3000);

}
