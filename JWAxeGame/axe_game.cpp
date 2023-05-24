#include "raylib.h"

int main()
{

    int width{350};
    int height{200};

    // Circle Coordinates
    int XCoordinate{width / 2};
    int YCoordinate{height / 2};
    int radius = 25;
    int Speed = 10;

    InitWindow(width, height, "JWGame");

    SetTargetFPS(60);
    while (WindowShouldClose() != true)
    {
        BeginDrawing();
        ClearBackground(WHITE);

        // Game logic Begins
        DrawCircle(XCoordinate, YCoordinate, radius, BLUE);

        if (IsKeyDown(KEY_D))
        {
            XCoordinate += Speed;
        }
        if (IsKeyDown(KEY_A))
        {
            XCoordinate -= Speed;
        }
        if (IsKeyDown(KEY_W))
        {
            YCoordinate -= Speed;
        }
        if (IsKeyDown(KEY_S))
        {
            YCoordinate += Speed;
        }

        // Game logic Ends
        EndDrawing();
    }
}