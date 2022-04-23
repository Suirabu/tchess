#include <assert.h>
#include <stdlib.h>

#include "board.h"
#include "error.h"
#include "fen.h"

Board fen_decode(const char* fen_str) {
    Board board;
    unsigned int ix = 0;

    while(*fen_str) {
        const char c = *fen_str++;

        switch(c) {
            case 'p':
                board.squares[ix++] = PAWN | BLACK;
                break;
            case 'P':
                board.squares[ix++] = PAWN | WHITE;
                break;
            case 'n':
                board.squares[ix++] = KNIGHT | BLACK;
                break;
            case 'N':
                board.squares[ix++] = KNIGHT | WHITE;
                break;
            case 'b':
                board.squares[ix++] = BISHOP | BLACK;
                break;
            case 'B':
                board.squares[ix++] = BISHOP | WHITE;
                break;
            case 'r':
                board.squares[ix++] = ROOK | BLACK;
                break;
            case 'R':
                board.squares[ix++] = ROOK | WHITE;
                break;
            case 'q':
                board.squares[ix++] = QUEEN | BLACK;
                break;
            case 'Q':
                board.squares[ix++] = QUEEN | WHITE;
                break;
            case 'k':
                board.squares[ix++] = KING | BLACK;
                break;
            case 'K':
                board.squares[ix++] = KING | WHITE;
                break;

            // Technically a no-op since it should be illegal to have unmarked
            // empty squares before a forward slash, but it's still nice to
            // handle :^)
            case '/': {
                while(ix % 8 != 0) {
                    board.squares[ix++] = 0;
                }
                break;
            }

            default: {
                if(c <= '0' || c > '8') {
                    REPORT_ERROR("Invalid character '%c' found in FEN string\n");
                    exit(EXIT_FAILURE);
                }

                int empty_squares = c - '0';
                for(int i = 0; i < empty_squares; ++i) {
                    board.squares[ix++] = 0;
                }
                break;
            }
        }
    }

    return board;
}

const char* fen_encode(Board board) {
    REPORT_ERROR("Function `fen_encode` has not been implemented yet!");
    exit(EXIT_FAILURE);
}
