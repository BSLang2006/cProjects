#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void rev(char *rev) {
	int *tc;
	printf("\nFunction started\n\n");
	printf("rev = %s", rev);
	int len = strlen(rev) - 1;
	printf("len = %d\n", len);
	char* temp = malloc(sizeof(char)*len);
	printf("temp = %s\n", temp);

	for (int i = 0; i < len; i++) {
		tc = *rev[len-1-i];
		temp[i] = tc;
	}

	for (int i = 0; i < len; i++) {
		printf("temp %d = %c\n", i, temp[len - i - 1]);
	}

	printf("temp[0] = %c\n", temp[0]);
	printf("\ntemp = %s\n", temp);
	rev = temp;
	printf("rev = %s\n", rev);
	printf("\nFunction ended\n\n");
}

int main(void) {

	size_t maxn = 0;
	char* s = (char*)malloc(sizeof(char) * maxn);
	
	printf("enter a string to turn inside out: ");
	getline(&s, &maxn, stdin);
	printf("entered string = %s", s);
	int len = strlen(s) - 1;

	printf("maxn = %ld, strlen = %ld, len = %d\n", maxn, strlen(s), len);

	if (len % 2 == 0) {
		printf("len = %d\n", len);
//		char* front = (char*)malloc(sizeof(char) * (len / 2));
	}
	rev(s);
	printf("reversed = %s", s);

	return 0;
}
