#include "raylib.h"
#include "cell.h"

Cell::Cell() : x(0), y(0), life(0) {}

Cell::Cell(int x, int y, int life = 0) {
    this->x = x * 100;
    this->y = y * 100;
    this->life = life;
}

int Cell::draw() const {
    switch (life) {
    case 0:
        DrawRectangle(x, y, 100, 100, BLACK);
        break;
    case 1:
        DrawRectangle(x, y, 100, 100, WHITE);
        break;
    default:
        break;
    }
    
    return 0;
}
