#include <raylib.h>
#include <iostream>
#include "game.h"

double lastUpdateTime = 0;

bool  EventTriggered(double interval)
{
	double currentTime = GetTime();
	if (currentTime - lastUpdateTime>= interval)
	{
		lastUpdateTime = currentTime;
		return true;
	}
	return false;
}

int main()
{
	std::cout << "Tetris Game Init" << std::endl;

	Color darkBlue = { 44,44,127,255 };
	const char* title = "Tetris Game";
	InitWindow(300, 600, title);
	SetTargetFPS(60);
	
	Game game = Game();




	while (WindowShouldClose() == false) 
	{
		game.HandleInput();
		if (EventTriggered(0.2))
		{
			game.MoveBlockDown();
		}

		BeginDrawing();
		ClearBackground(darkBlue);
		game.Draw();
		EndDrawing();
	}

	CloseWindow();


}