#include <stdlib.h>
#include <stdio.h>
//#include "board.h"

int main(void) {

	int nrows = 0;
	int ncols = 0;
	size_t maxn = 5;
//	int nsteps = 0;

	printf("Enter the number of rows and the number of columns seperated by a space \n");
	scanf("%d %d", &nrows, &ncols);
	printf("nrows = %d, ncols = %d\n", nrows, ncols);
	char *mat = (char *) malloc(nrows*(ncols*2-1)*sizeof(char));
//	printf("Enter the number of steps to take ");
//	scanf("%d", &nsteps);

	for (int i=0; i<nrows; i++) {
		printf("Enter row %d elements ", ncols);
		getline(&mat, &maxn, stdin);
	}
//	printf("\n");
	for (int i=0; i< nrows; i++) {
		printf("array %d =", i);		
		printf("%s ", mat);
	}
//		printf("\n");

	
	free(mat);
	return 0;
}
