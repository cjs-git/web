#include "raylib.h"

int main() {
    const int WindowWidth = 800;
    const int WindowHeight = 450;
    
    InitWindow(WindowWidth, WindowHeight, "SpriteMaker");
    
    SetTargetFPS(60);
    
    while(!WindowShouldClose()) {
        BeginDrawing();
            ClearBackground(RAYWHITE);
            
        EndDrawing();
    }
    
    return 0;
}