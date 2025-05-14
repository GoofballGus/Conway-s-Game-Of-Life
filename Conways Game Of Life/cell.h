#pragma once

class Cell {
public:
    int x, y;
    int life; // 0 = dead, 1 = alive

    Cell(); // Default constructor
    Cell(int x, int y, int life); // Parameterized constructor

    int draw() const;
};
