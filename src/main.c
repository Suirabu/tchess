#include "board.h"
#include "fen.h"

int main(void) {
    Board board = fen_decode(FEN_STARTING_POSITION); 

    return 0;
}
