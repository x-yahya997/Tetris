#include <raylib.h>
#include <iostream>
#include "game.h"

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
		BeginDrawing();
		ClearBackground(darkBlue);
		game.Draw();
		EndDrawing();
	}

	CloseWindow();


}