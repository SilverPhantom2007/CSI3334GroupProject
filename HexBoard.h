/*
 * Author: Teal Team Six
 * Assignment Title: Hex Game Group Project
 *
 */

#ifndef HEX_BOARD_H_
#define HEX_BOARD_H_

#include "HexCell.h"
#include <unordered_set>

class HexBoard {
private:
  std::unordered_set<HexCell> board;
  int size;

  bool CheckPlayerWinRecursive(int player, const HexCell &cell,
                               std::unordered_set<HexCell> &visitedCells);

public:
  int GetSize() const;

  bool AddCell(int row, int col, int player);
  bool CheckPlayerWin(int player) const;
};

#endif