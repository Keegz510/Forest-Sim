#pragma once

#include <string>

struct WindowSettings
{
public:
	WindowSettings(int width, int height, bool fs, char* title)
	{
		ScreenWidth = width;
		ScreenHeight = height;
		bIsFullscreen = fs;
		WindowTitle = title;
	}
	int ScreenWidth;
	int ScreenHeight;
	bool bIsFullscreen;
	char* WindowTitle;
};

class Game
{
public:
	Game(const WindowSettings windowSettings);
	~Game();

	void Initialize();
	void BaseUpdate();

	/// Returns the current deltaTime
	inline float GetDeltaTime() const { return deltaTime; }
private:
	float deltaTime;
	WindowSettings window;
};