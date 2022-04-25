#include <assert.h>
#include <stdlib.h>

#include "board.h"
#include "error.h"
#include "fen.h"
#include "piece.h"

Board fen_decode(const char* fen_str) {
    Board board;
    unsigned int ix = 0;

    while(*fen_str) {
        const char c = *fen_str++;

        // Technically a no-op since it should be illegal to have unmarked
        // empty squares before a forward slash, but it's still nice to
        // handle :^)
        if(c == '/') {
            while(ix % 8 != 0) {
                board.squares[ix++] = EMPTY;
            }
        } else if(c > '0' && c <= '8') {
            int empty_squares = c - '0';
            for(int i = 0; i < empty_squares; ++i) {
                board.squares[ix++] = EMPTY;
            }
        } else {
            Piece piece = get_piece_from_char(c);

            if(piece == INVALID) {
                REPORT_ERROR("Illegal character '%c' encountered while decoding FEN string\n", c);
                exit(EXIT_FAILURE);
            }

            board.squares[ix++] = piece;
        }
    }

    return board;
}

const char* fen_encode(Board board) {
    REPORT_ERROR("Function `fen_encode` has not been implemented yet!");
    exit(EXIT_FAILURE);
}
