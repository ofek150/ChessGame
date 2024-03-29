#pragma once

#define MAX_X 7
#define MAX_Y 7
#define BOARD_SIZE 8

enum player {
	whitePlayer = 0, blackPlayer
};
enum moveMsgID
{
	VALID_MOVE = 0,
	VALID_MOVE_CHESS,
	INVALID_SRC_DOESNT_HAVE_PLAYER_FIGURE,
	INVALID_DST_TAKEN,
	INVALID_CAUSES_CHESS,
	INVALID_POINT_OUTSIDE_BOARD,
	INVALID_MOVEMENT,
	INVALID_SRC_EQU_DST,
	VALID_CHECKMATE
};