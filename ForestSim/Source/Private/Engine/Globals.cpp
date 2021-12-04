#include "../../Public/Engine/Globals.h"
#include "../../Public/Engine/Game.h"

Game* Globals::globalGame = nullptr;


/// <summary>
/// Handles setting up of the global properties
/// </summary>
/// <param name="gameRef">Reference to the main game class</param>
void Globals::Setup(Game* gameRef)
{
	globalGame = gameRef;
}
