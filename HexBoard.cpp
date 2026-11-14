#include "HexBoard.h"
#include "HexCell.h"
#include <unordered_set>

int HexBoard::GetSize() const { return size; }

bool HexBoard::AddCell(int row, int col, int player) {
  bool added = false;
  HexCell newCell(row, col, player);
  if (board.find(newCell) == nullptr)
    added = board.insert(newCell).second;
  return added;
}

bool HexBoard::CheckPlayerWin(int player) const {
  std::unordered_set<HexCell> visitedCells;
}

bool HexBoard::CheckPlayerWinRecursive(
    int player, const HexCell &cell,
    std::unordered_set<HexCell> &visitedCells) {}