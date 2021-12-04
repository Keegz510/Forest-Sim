#pragma once

#pragma region Forward Declarations

class Game;

#pragma endregion

class Globals
{
public:

	static void Setup(Game* gameRef);

	static Game* GetGlobalGameRef() { return globalGame; }

	static float DeltaTime() { return globalGame->GetDeltaTime(); }
private:

	static Game* globalGame;
};