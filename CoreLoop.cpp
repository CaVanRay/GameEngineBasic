// input events
// update game logic
// render frame
// I'm gonna copy down some example code

#include <chrono> // for time management
#include <thread> // For sleeping to control frame rate
#include <iostream> // For basic output

// Forward declarations for simplicity
void InitializeGame();
void ProcessInput();
void UpdateGame(float deltaTime);
void RenderGame();
void ShutdownGame();


