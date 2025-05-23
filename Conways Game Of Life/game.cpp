#include "game.h"

#include "raylib.h"
#include <iostream>


void Game::init() {
    // Initialize the game
    InitWindow(SCREEN_WIDTH, SCREEN_HEIGHT, "Conway's Game of Life");
    SetTargetFPS(60); // Set the target frames per second
	SetExitKey(0); // Disable exit key (ESC) to allow custom exit handling
	cells = { Cell(5, 0, 0) }; // Initialize cells with some values
    Game::run();
}

void Game::run() {
    // Main game loop
    while (!WindowShouldClose()) {
        update();
        render();
    }
    CloseWindow(); // Properly close the window when done
}

void Game::render() {
    BeginDrawing();
    ClearBackground(DARKBLUE);

    for (const Cell& cell : cells) {
        cell.draw(); // Or access cell.x, cell.y, etc.
    }

    EndDrawing();
}

void Game::update() {
    std::cout << "Updating..." << std::endl;
}
