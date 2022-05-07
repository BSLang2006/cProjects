#include <stdio.h>
#include <stdlib.h>

const char* isValid(){
	char *isValid = "VALID";
	return isValid;
}
const char* inValid(){
	char *inValid = "NOT VALID";
	return inValid;
}


int main(void) {
	size_t maxn = 10;
	int buffer;	
	char *c;
        c = (char *) malloc(sizeof(char)*maxn);
	char lastToOpen[55];
	int elements = 0;

//	printf("Enter statements to be checked here, one at a time: \n");
	
	while (buffer != EOF) {
		buffer = getline(&c, &maxn, stdin);		
//		printf("current string: %s\nand is %d characters long\n",c , buffer);		
		for (int i = 0; i < buffer; i++) {
/*			if (parent == -1 || curly == -1 || square == -1){
				printf("%s\n", inValid());
				break;
			}
*/
			if (c[i] == '(' ) {
				elements = elements +1;
				lastToOpen[elements] = 'p';
			}
			if (c[i] == ')' ) {
				if (lastToOpen[elements] !='p') {
//					printf("%s", inValid());
					elements = elements -1;
					break;
				}
				elements = elements -1;
			
			}
			if (c[i] == '{' ) {
				elements = elements +1;
				lastToOpen[elements] = 'c';
			}
			if (c[i] == '}' ) {
				if (lastToOpen[elements] != 'c') {
//					printf("%s", inValid());
					elements = elements -1;
					break;
				}
				elements = elements -1;
			}
			if (c[i] == '[' ) {
				elements = elements +1;
				lastToOpen[elements] = 's';
			}
			if (c[i] == ']' ) {
				if (lastToOpen[elements] != 's') {

//					printf("%s", inValid());
					elements = elements -1;
					break;
				}
				elements  = elements -1;
			}
		}
//	printf("buffer size is: %d\n", buffer);	
	if (buffer == EOF){
		break;
	}
	else {
		if ( elements == 0) {
			printf("%s", isValid());
			elements = 0;
		}	
		else {
//			printf("%d", elements);
	      		printf("%s", inValid());
			elements = 0;
			}
		}
	}
	free(c);		

	return 0;
}
