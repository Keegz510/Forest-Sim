#include "../../Public/Engine/Game.h"
#include "../../Public/Engine/Globals.h"
#include <raylib.h>

Game::Game(const WindowSettings windowSettings) : window(windowSettings)
{
	Globals::Setup(this);			// Add this class to the globals
}

Game::~Game()
{
}

/// <summary>
/// Handles Creating/Setting up the game/game window
/// </summary>
void Game::Initialize()
{

	// Create the new window
	InitWindow(window.ScreenWidth, window.ScreenHeight, window.WindowTitle);
	SetTargetFPS(60);

	
}


/// <summary>
/// Handles updating all objects
/// </summary>
void Game::BaseUpdate()
{
	while (!WindowShouldClose())
	{
		deltaTime = GetFrameTime();					// Get the detlaTime
		// Update base details here!

		BeginDrawing();

		ClearBackground(RAYWHITE);

		DrawText("Congrats! You created your first window!", 190, 200, 20, LIGHTGRAY);

		EndDrawing();
	}

	CloseWindow();
}
