#pragma once

#include <string>
#include <cassert>
#include <fstream>
#include <vector>

#include "Cell.h"
#include "Tile.h"

using namespace std;

class Board {
public:
    enum Direction {
        Up, Right, Down, Left
    };
    Board();
    Board(string board_file);
    int getRows();
    int getCols();
    Cell getCellAt(int row, int col);
    //  Returns the user's tile.
    Tile getTile();
    // Returns wheter you've won the game or not.
    bool isWinningPosition();
    // Returns wheter you've lost the game or not.
    bool isLosingPosition();
    // Moves the tile in the given direction, even if it results in an invalid board (like the tile outside the solid cells or standing straight on a weak cell) 
    void moveTile(Direction direction);
    
    bool tileIsCompletelyOutsideBoard();
private:
    int rows;
    int cols;
    vector< vector<Cell> > cells;
    Tile tile;
    bool outside(int row, int col);
};