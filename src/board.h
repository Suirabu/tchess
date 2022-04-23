#ifndef BOARD_H
#define BOARD_H

#include <stdint.h>

#define SQUARES_ON_BOARD 64

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

typedef uint8_t Square;
typedef struct {
    Square squares[64];
} Board;

void draw_board_ascii(Board board);
void draw_board_unicode(Board board);
void draw_board_graphical(Board board);

#endif // BOARD_H
