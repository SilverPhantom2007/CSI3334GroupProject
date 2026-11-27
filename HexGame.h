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
    int playerTurn;
    int turnNumber;
    bool inTestMode;
    bool started;

public:

    int playerWon(); // -1 = unset, 1 or 2 to indicate winning player
    void startGame(); // - starts the game
    void playMove(int row, int column, int player); // (used only in Test mode)
    void tick(); // - process a step of the main game loop
    bool IsGameOver(); // returns if the game is finished

};

#endif