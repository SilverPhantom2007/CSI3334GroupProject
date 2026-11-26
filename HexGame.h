#ifndef HEX_GAME_H_
#define HEX_GAME_H_

#include "HexBoard.h"
#include "HexRenderer.h"
#include "SDL_Plotter.h"
#include <cstddef>
#include <functional>

class HexGame {
private:
    HexBoard board;
    HexRenderer renderer;
    SDL_Plotter plotter;
    Int playerTurn;
    Int turnNumber;
    Bool inTestMode;
    Bool started;

public:

    Int playerWon(); // -1 = unset, 1 or 2 to indicate winning player
    StartGame(); // - starts the game
    PlayMove(int row, int column, int player); // (used only in Test mode)
    Tick(); // - process a step of the main game loop
    Bool IsGameOver(); // returns if the game is finished

}

#endif