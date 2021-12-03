#include "../../Public/Engine/Game.h"
#include <raylib.h>

Game::Game(const WindowSettings windowSettings) : window(windowSettings)
{
	
}

Game::~Game()
{
}

void Game::Initialize()
{

	// Create the new window
	InitWindow(window.ScreenWidth, window.ScreenHeight, window.WindowTitle);
	SetTargetFPS(60);
}

void Game::BaseUpdate()
{
	while (!WindowShouldClose())
	{
		// Update base details here!

		BeginDrawing();

		ClearBackground(RAYWHITE);

		DrawText("Congrats! You created your first window!", 190, 200, 20, LIGHTGRAY);

		EndDrawing();
	}

	CloseWindow();
}
