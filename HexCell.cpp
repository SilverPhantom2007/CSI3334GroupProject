#include "HexCell.h"

HexCell::HexCell(int row, int col, int player)
    : row(row), col(col), player(player) {}
HexCell::HexCell(const HexCell &other)
    : row(other.row), col(other.col), player(other.player) {}
const HexCell &HexCell::operator=(const HexCell &rhs) {
  row = rhs.row;
  col = rhs.col;
  player = rhs.player;

  return *this;
}

inline int HexCell::GetRow() const { return row; }
inline int HexCell::GetCol() const { return col; }
inline int HexCell::GetPlayer() const { return player; }

inline void HexCell::SetPlayer(int player) { this->player = player; }

bool HexCell::operator==(const HexCell &rhs) {
  return row == rhs.row && col == rhs.col;
}