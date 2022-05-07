#ifndef BOARD_H

#define BOARD_H

//Board* update_board(Board *);

typedef struct Board{
	int nrows;
       	int ncols;
	int *mat;

} Board;

int buildBoard(int, int, int *, int *);

#endif
