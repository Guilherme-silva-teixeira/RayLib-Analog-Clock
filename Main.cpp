#include "raylib.h"
#include "AnalogClock.hpp"

int main()
{
	const int WINDOW_WIDTH = 600;
	const int WINDOW_HEIGHT = 600;
	Color LIGHT_BLUE = { 255,239,240,255 };
	
	InitWindow(WINDOW_WIDTH, WINDOW_HEIGHT, "Analog Clock");
	SetTargetFPS(15);

	AnalogClock clock{ 250, {300,320} };

	// Main Loop

	while (WindowShouldClose() == false)// 15 times per second
	{
		// 1. Event Handling

		// 2. Updating
		clock.Update();

		// 3. Drawing

		BeginDrawing();
		ClearBackground(LIGHT_BLUE);
		clock.Draw();
		EndDrawing();
	}

	CloseWindow();
}
