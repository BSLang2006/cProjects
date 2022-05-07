#include <stdlib.h>
#include <stdio.h>
#include <string.h>

typedef struct Board {
	int nrows;
	int ncols;
	int *mat;
} Board;


void buildBoard(int a, int b, int *nrows, int *ncols) {
	Board *start;
	start = (Board *) malloc(sizeof(Board));	
	start->nrows = a;
	start->ncols = b;
	*nrows = a;
	*ncols = b;
	
//	start->grid = malloc(a*b*sizeof(int));
	printf("Inside funtion - start->nrows = %d, start->ncols = %d\n", start->nrows, start->ncols);
	free(start);	
	
//	return start;
}


