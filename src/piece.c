#include "piece.h"

Piece get_piece_from_char(char c) {
    switch(c) {
        case 'p':   return PAWN | BLACK;
        case 'P':   return PAWN | WHITE;
        case 'n':   return KNIGHT | BLACK;
        case 'N':   return KNIGHT | WHITE;
        case 'b':   return BISHOP | BLACK;
        case 'B':   return BISHOP | WHITE;
        case 'r':   return ROOK | BLACK;
        case 'R':   return ROOK | WHITE;
        case 'q':   return QUEEN | BLACK;
        case 'Q':   return QUEEN | WHITE;
        case 'k':   return KING | BLACK;
        case 'K':   return KING | WHITE;

        default:    return INVALID;
    }
}

char get_char_from_piece(Piece piece) {
    switch(piece) {
        case PAWN | BLACK:      return 'p';
        case PAWN | WHITE:      return 'P';
        case KNIGHT | BLACK:    return 'n';
        case KNIGHT | WHITE:    return 'N';
        case BISHOP | BLACK:    return 'b';
        case BISHOP | WHITE:    return 'B';
        case ROOK | BLACK:      return 'r';
        case ROOK | WHITE:      return 'R';
        case QUEEN | BLACK:     return 'q';
        case QUEEN | WHITE:     return 'Q';
        case KING | BLACK:      return 'k';
        case KING | WHITE:      return 'K';

        default:    return INVALID;
    }
}
