#include "King.h"

King::King(const std::string color) : Figure("King", color) {} // CTOR

King::~King() {} // DTOR

bool King::canMove(Figure* (board)[BOARD_SIZE][BOARD_SIZE], const Move& move) const  // Returns true if the King can move and false if it can't
{
	int srcX = move.getSrc().getX(), srcY = move.getSrc().getY(), destX = move.getDest().getX(), destY = move.getDest().getY();
    int deltaX = std::abs(srcX - destX);
    int deltaY = std::abs(srcY - destY);
    if (deltaX > 1 || deltaY > 1)
    {
        return false;
    }
    return true;
}
