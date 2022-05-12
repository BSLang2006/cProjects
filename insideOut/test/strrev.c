#include <stdlib.h>
#include <stdio.h>
#include <string.h>


void reverse(char* s) {
	//this function is copied from javapoint.com for learning purposes
	// it appears to put the newline char in s[0]
	int len, temp;
	len = strlen(s)-1;
	printf("len = %d\n", len);

	for (int i=0; i<len/2; i++) {
		temp = s[i];
		s[i] = s[len - i-1];
		s[len - i] = temp;
	}
}


int main(void) {

	size_t maxn = 0;
	char* s = (char*)malloc(sizeof(char) * maxn);
	
	printf("enter a string: ");
	fgets(s, 20, stdin);
	printf("entered string is : %s", s);
	for (int i = 0; i < strlen(s); i++) {
		printf("s[%d] = %c\n", i, s[i]);
	}

	reverse(s);
	printf("reversed = %s\n", s);
	for (int i = 0; i < strlen(s); i++) {
		printf("s[%d] = %c\n",i, s[i]);
	}

}