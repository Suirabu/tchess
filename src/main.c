#include <stdio.h>
#include <stdlib.h>

#include "board.h"
#include "fen.h"

static void clear_text_formatting(void) {
    printf("\033[0m");  // Clear all text formatting options
}

int main(void) {
    atexit(clear_text_formatting);

    Board board = fen_decode(FEN_STARTING_POSITION); 
    draw_board_graphical(board);

    return 0;
}
