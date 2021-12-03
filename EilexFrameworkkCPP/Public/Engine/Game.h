#pragma once

class Game
{
public:
	Game();
	~Game();

	void Initialize();
	void BaseUpdate();

	/// Returns the current deltaTime
	inline float GetDeltaTime() const { return deltaTime; }
private:
	float deltaTime;
};