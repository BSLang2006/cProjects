#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "board.h"

int main(void) {
	
	FILE *fin = fopen("input.txt", "r");
	if (fin == NULL) 
{
		printf("File can't be opened");
		return 0;}

	int nrows = 0, ncols = 0, nsteps = 0;
//	int healthy = 0, infected = 0;
	int n = 0; //input char stored here for looping
	int d = 0; //index marker while removing spaces

	fscanf(fin, "%d %d\n", &nrows, &ncols);
	fscanf(fin, "%d\n", &nsteps);
		
//	matrix for input
	int **mat = (int **) malloc(nrows*sizeof(int *));
	for (int i=0; i<nrows*3+1; i++) {
		*(mat+i) = (int *) malloc(ncols*3+1*sizeof(int));
	}

//	Loop to prove a grid 15x15 exists // why is it filled with eronious data?
	for(int i=0;i<nrows*3;i++) {
		for(int j=0;j<ncols*3;j++) {
			mat[i][j] = 'x';
			printf("mat[%d][%d] = %c\n",i+1,j, mat[i][j]);}}


//	matrix for updating
//	int **newMat = (int **) malloc((nrows)*sizeof(int *));
//	for (int i=0; i<nrows*3; i++) {
//		*(newMat+i) = (int *) malloc(ncols*3*sizeof(int));
//	}

//      loop for filling input
	printf("mat[14][14] = %c\n", mat[14][14]);
	do { for (int i=0; i<nrows; i++) {
		d=0;
		for (int j=0; j<ncols*2; j++) {
			 n = fgetc(fin);
				if (n != ' ' && n != '\n') {
					mat[i][d] = n;				
					d++;}}}
		} while(n == 'x' || n == 'i' || n == 'x' || n == ' ' || n == '\0');	

// 	loop to prove the same 15x15 loop was populated from the input stream
	printf("input stream \n");
	for (int i=0;i<nrows;i++){	
		printf("\n");
		for (int j=0;j<ncols;j++){
			printf("mat[%d][%d] = %c\n", i,j,mat[i][j]);
//			newMat[i+(ncols*i)][j+(ncols*j)] = mat[i][j];
   }}
	
	printf("\n\n");

//	display newMat to screen
//	for (int i=0; i<nrows*3; i++) {
//		printf("\n");
//		for (int j=0; j<ncols*3; j++) {
//			printf("%d, %d\n", i, j);
//			newMat[i][j] = 'x';
//			printf("mat[%d][%d] = %c \n", i, j, mat[i][j]);
//    	}}


//	loop for counting status of cells
/*	for (int i=0; i<nrows; i++) {
		for (int j=0; j<ncols; j++) {
			if (mat[i][j] == 'h') {
				healthy++;}
			if (mat[i][j] == 'i') {
			infected++;}}}

	int *brdPtr;	
	Board *current;
	current = malloc(sizeof(Board));
	brdPtr = *mat;
	(*current).mat = brdPtr;
*/	
/*	
	printf("&brdPtr p %p\n", &brdPtr);	
	printf("&mat p = %p\n", &mat);	
	printf("*mat ls = %ls", *mat);
//	printf("*mat+1 ls = %ls", *mat+1);
	printf("*(mat+1) ls = %ls", *(mat+1));
	printf("&mat+1 p = %p\n", &mat+1);
	printf("*(mat+2) ls %ls\n", *(mat+2));
	
//	printf("*(mat+2i)[3] %c\n", *(mat+2)[3]);
	printf("current->mat d %ls\n", current->mat);
*/
	
//	buildBoard(nrows, ncols, &current->nrows, &current->ncols);
//	printf("current->nrows = %d\n", current->nrows);
//	printf("healthy: %d, infected: %d\n", healthy, infected);

// 	attempting to build update function
/*
	for (int i=0; i<nrows; i++){
		for (int j=0; j<ncols; j++) {
			if (mat[ncols+1][j] == 'i'|| mat[i+1][j] == 'i' ) {
				newMat[i][j] = 'i';}
			else {mat[i][j] = newMat[i][j];}}}
*/
/*	for (int i=0;i<nrows;i++){
		printf("\n");
		for(int j=0; j<ncols; j++) {
			printf("%c", newMat[i][j]);}}
 */	

	fclose(fin);
	free(mat);
//	free(newMat);
//	free(current);

	return 0;
}
