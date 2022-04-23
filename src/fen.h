#ifndef FEN_H
#define FEN_H

#include "board.h"

#define FEN_STARTING_POSITION "rnbqkbnr/pppppppp/8/8/8/8/PPPPPPPP/RNBQKBNR"

Board fen_decode(const char* fen_str);
const char* fen_encode(Board board);

#endif // FEN_H
