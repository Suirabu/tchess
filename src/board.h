#ifndef BOARD_H
#define BOARD_H

#include <stdint.h>

#define SQUARES_ON_BOARD 64

typedef uint8_t Square;
typedef struct {
    Square squares[64];
} Board;

void draw_board_ascii(Board board);
void draw_board_unicode(Board board);
void draw_board_graphical(Board board);

#endif // BOARD_H
