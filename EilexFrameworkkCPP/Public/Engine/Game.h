#pragma once

#include <string>

struct WindowSettings
{
public:
	int ScreenWidth;
	int ScreenHeight;
	bool bIsFullscreen;
	std::string WindowTitle;
};

class Game
{
public:
	Game();
	~Game();

	void Initialize(const WindowSettings windowSettings);
	void BaseUpdate();

	/// Returns the current deltaTime
	inline float GetDeltaTime() const { return deltaTime; }
private:
	float deltaTime;
	WindowSettings window;
};