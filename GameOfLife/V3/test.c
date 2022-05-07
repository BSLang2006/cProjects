#include <stdlib.h>
#include <stdio.h>
#include <string.h>


int main(void) {

	FILE *fin = fopen("input.txt", "r");
	if (fin == NULL) {
		printf("File can't be opened");
		return 0;}

	int nrows = 0, ncols = 0, nsteps = 0;
	int n = 0; //input char stored here for looping
	int d = 0; //index marker while removing spaces

	fscanf(fin, "%d %d\n", &nrows, &ncols);
	fscanf(fin, "%d\n", &nsteps);

	printf("%d %d %d\n", nrows, ncols, nsteps);
//	matrix for input
	int **mat = (int **) malloc(nrows*sizeof(int *));
	for (int i=0; i<nrows; i++) {
		*(mat+i) = (int *) malloc(ncols*2*sizeof(int));}
	int **newMat = (int **) malloc(nrows*3*sizeof(int *));
	for (int i=0; i<nrows*3; i++) {
		*(newMat+i) = (int *) malloc(ncols*3*sizeof(int));}

	do { for (int i = 0; i < nrows; i++) {
		d = 0;
		printf("\n");
		for (int j = 0; j < ncols*2; j++) {
			 n = fgetc(fin);
			if (n != ' ' && n != '\n') {
			mat[i][d] = n;
//			mat[i+(nrows*i)][j+(ncols*j)] = n;
		printf("mat[%d][%d] = %c\n", i, d, mat[i][d]);
					
					d++;}}}
		} while(n == 'x' || n == 'i' || n == 'x' || n == ' ' || n == '\0');
	
	for (int i=0;i<nrows;i++){
		printf("\n");
		for (int j=0;j<ncols;j++){
//			printf("%c", mat[i][j]);
//			newMat[i+(nrows*i)][j+(nrows*j)] = n;
	
}}
	printf("\nnewMat\n");
	printf("newMat[6][6] = %c\n", newMat[6][6]);	
	
	for (int i=0;i<nrows*3;i++) {
		printf("\n");
		for (int j=0;j<ncols*3;j++) {
//			newMat[i+(nrows*i)][j+(ncols*j)] = mat[i][j];
			printf("newMat[%d][%d] = %c\n", i,j, newMat[i][j]);}}	
	
				
	printf("\n");
	for (int i=0;i<nrows;i++){
		for (int j=0;j<ncols;j++){
			printf("%c", mat[i][j])
}}	
	
	return 0;
}
