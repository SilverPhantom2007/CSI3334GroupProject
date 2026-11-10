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
  HexCell() = delete;
  HexCell(int row, int col, int player = 0);
  HexCell(const HexCell &other);
  const HexCell &operator=(const HexCell &rhs);

  // Getters & Setters
  inline int GetRow() const;
  inline int GetCol() const;
  inline int GetPlayer() const;

  inline void SetPlayer(int player);

  // Equality and Hashing
  bool operator==(const HexCell &rhs);

  struct Hasher {
    std::size_t operator()(const HexCell &cell);
  };
};

#endif