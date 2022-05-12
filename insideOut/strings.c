// with the excecption of the commented for loop 
// all code was authored by Brandon Lang, May 2022

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void rev(char *rev) {
	int len = strlen(rev)-1;
	char* temp = malloc(sizeof(char)*len);

// this for loop really helped me understand '\0' and '\n'
/*	for (int i = 0; i <= len; i++) {
		if (rev[i] == '\n') 
			printf("rev[%d] = \\n \n", i);
		else if (rev[i] == '\0') 
			printf("rev[%d] = \\0 \n", i);
		else 
			printf("rev[%d] = %c\n", i, rev[i]);		
	}
*/
	for (int i=0; i<len; i++)
		temp[i] = rev[len-i-1];
	strcpy(rev, temp);
	rev[len] = '\n';
}

int main(void) {

	char* s = (char*)malloc(sizeof(char) * 100);
	char* front = (char*)malloc(sizeof(char) * 100);
	char* back = (char*)malloc(sizeof(char) * 100);
	
	printf("enter a string to turn inside out: ");
	fgets(s, 100, stdin);
	int len = strlen(s);
	
	if (len % 2 == 0) {
		strncpy( front, s, len/2-1 );
		front[len/2-1] = '\n';
		rev(front);
		front[len/2-1] = s[len/2-1];
		front[len/2] = '\n';
	
		for (int i = 0; i < len/2-1; i++) {
			back[i] = s[len/2 + i];
		}
		back[len/2-1] = '\n';
		rev(back);
		front[len/2] = '\0';
		strcat(front, back);
		printf("final = %s", front);
	}
	else {
		strncpy(front, s, len/2 );
		front[len/2] = '\n';
		rev(front);
	
		for (int i = 0; i < len/2; i++) {
			back[i] = s[len/2 + i];
		}
		back[len/2] = '\n';
		rev(back);
		front[len/2] = '\0'; 
		strcat(front, back);
		printf("final = %s", front);
	}
	return 0;
}
