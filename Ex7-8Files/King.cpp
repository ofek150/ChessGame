#include "King.h"

King::King() : Figure("King") {} // CTOR

King::~King() {} // DTOR

bool King::canMove(const Board& board, const Move move) const // Returns true if the King can move and false if it can't
{
    return true;
}
