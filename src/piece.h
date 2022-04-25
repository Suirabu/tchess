#ifndef PIECE_H
#define PIECE_H

#include <stdint.h>

// Piece type definitions
#define EMPTY   0
#define PAWN    1
#define KNIGHT  2
#define BISHOP  4
#define ROOK    8
#define QUEEN   16
#define KING    32

// Color definitions
#define BLACK   64
#define WHITE   128

#define INVALID 0xFF

typedef uint8_t Piece;

Piece get_piece_from_char(char c);
char get_char_from_piece(Piece piece);

#endif  // PIECE_H
