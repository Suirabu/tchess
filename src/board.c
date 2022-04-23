#include <stdio.h>
#include <stdlib.h>

#include "board.h"
#include "error.h"

void draw_board(Board board) {
    for(int rank = 0; rank < 8; ++rank) {
        for(int file = 0; file < 8; ++file) {
            Square sq = board.squares[rank * 8 + file];
            char c = '.';

            switch(sq) {
                case PAWN | BLACK:
                    c = 'p';
                    break;
                case PAWN | WHITE:
                    c = 'P';
                    break;
                case KNIGHT | BLACK:
                    c = 'n';
                    break;
                case KNIGHT | WHITE:
                    c = 'N';
                    break;
                case BISHOP | BLACK:
                    c = 'b';
                    break;
                case BISHOP | WHITE:
                    c = 'B';
                    break;
                case ROOK | BLACK:
                    c = 'r';
                    break;
                case ROOK | WHITE:
                    c = 'R';
                    break;
                case QUEEN | BLACK:
                    c = 'q';
                    break;
                case QUEEN | WHITE:
                    c = 'Q';
                    break;
                case KING | BLACK:
                    c = 'k';
                    break;
                case KING | WHITE:
                    c = 'K';
                    break;

                case EMPTY:
                    c = '.';
                    break;

                default:
                    REPORT_ERROR("Invalid piece '0x%2X' found on board\n", c);
                    exit(EXIT_FAILURE);
                    break;
            }

            putchar(c);
            putchar(' ');
        }

        putchar('\n');
    }
}
