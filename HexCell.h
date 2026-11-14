#ifndef HEX_CELL_H_
#define HEX_CELL_H_

#include <cstddef>
#include <functional>

class HexCell {
private:
  int row, col;
  int player;

public:
  // Constructors
  HexCell(int row, int col, int player = 0);
  HexCell(const HexCell &other);
  const HexCell &operator=(const HexCell &rhs);

  // Getters & Setters
  int GetRow() const;
  int GetCol() const;
  int GetPlayer() const;

  void SetPlayer(int player);

  // Equality and Hashing
  bool operator==(const HexCell &rhs);
};

namespace std {
template <> struct hash<HexCell> {
  size_t operator()(const HexCell &cell) const {
    size_t hr = hash<int>{}(cell.GetRow());
    size_t hc = hash<int>{}(cell.GetCol());
    return hr ^ (hc << 1);
  }
};
} // namespace std

#endif