#include "../../pch.h"
#include "../../Public/Engine/Game.h"
#include <raylib.h>

Game::Game()
{
}

Game::~Game()
{
}

void Game::Initialize(const WindowSettings windowSettings)
{
	window = windowSettings;

	// Create the new window
	InitWindow(window.ScreenWidth, window.ScreenHeight, ((char*)&window.WindowTitle));
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
