#include <stdio.h>
#include <stdlib.h>

#include "board.h"
#include "error.h"

static const char* ASCII_PIECES[] = {
    ".",
    "p", "n", "b", "r", "q", "k",
    "P", "N", "B", "R", "Q", "K",
};

static const char* get_piece_str(Square sq, const char** pieces) {
    switch(sq) {
        case PAWN | BLACK:
            return pieces[1];
        case PAWN | WHITE:
            return pieces[7];
        case KNIGHT | BLACK:
            return pieces[2];
        case KNIGHT | WHITE:
            return pieces[8];
        case BISHOP | BLACK:
            return pieces[3];
        case BISHOP | WHITE:
            return pieces[9];
        case ROOK | BLACK:
            return pieces[4];
        case ROOK | WHITE:
            return pieces[10];
        case QUEEN | BLACK:
            return pieces[5];
        case QUEEN | WHITE:
            return pieces[11];
        case KING | BLACK:
            return pieces[6];
        case KING | WHITE:
            return pieces[12];

        case EMPTY:
            return pieces[0];

        default:
            REPORT_ERROR("Invalid piece '0x%2X'\n", sq);
            exit(EXIT_FAILURE);
            break;
    }
}

void draw_board(Board board) {
    for(int rank = 0; rank < 8; ++rank) {
        for(int file = 0; file < 8; ++file) {
            Square sq = board.squares[rank * 8 + file];
            printf("%s ", get_piece_str(sq, ASCII_PIECES));
        }

        putchar('\n');
    }
}
