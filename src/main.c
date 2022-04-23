#include "board.h"
#include "fen.h"

int main(void) {
    Board board = fen_decode(FEN_STARTING_POSITION); 
    draw_board_graphical(board);

    return 0;
}
