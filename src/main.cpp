#include <iostream>
#include <string>
#include <sstream>
#include "raylib.h"

int main(int argc, char const *argv[])
{
    InitWindow(800, 450, "Ray of Hope");
    SetTargetFPS(120);
    Vector2 pos;
    pos.x = 10;
    pos.y = 120;

    while (!WindowShouldClose())
    {
        BeginDrawing();
        ClearBackground(RAYWHITE);
        DrawCircle(400, 225, 50, RED);
        std::ostringstream s;
        s << "FPS:" << GetFPS();
        DrawText(s.str().c_str(), 0, 0, 20, LIGHTGRAY);
        EndDrawing();
    }

    CloseWindow();
    return 0;
}
