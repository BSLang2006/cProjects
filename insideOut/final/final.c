#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void revstr(char *str1)
{
int i, len, temp;
len = strlen(str1);
for (i = 0;i < len/2;i++) {
temp = str1[i];
str1[i] = str1[len - 1 -i];
str1[len - i - 1] = temp;
}}


int main(void) {
	
	int mid = 0;
//	int size = 0;

	char *s = (char *) malloc(sizeof(char *)*strlen(s));
//	char first[20];
//	char second[20];
//	char temp1[20];
//	char temp2[20];

		
	scanf("%[^\n]", s);
	printf("%s\n", s);
	printf("size of s = %ld\n", strlen(s));
	mid = strlen(s) / 2;
//	printf("%d\n", mid);
	char *first = (char *) malloc(sizeof(char *)*mid);
	for (int i=0; i<mid; i++) {
		first[i] = s[i];				
		printf("%c", first[i]);	
	}
	char *second = (char *) malloc(sizeof(char *)*mid);
	for (int i=0; i<mid; i++) {
	//	int n = mid;
		second[i] = s[mid+i];
}
	printf("s = %s\n", s);
	
	revstr(first);
	revstr(second);

	printf("first = %s\n", first);
	printf("second = %s\n", second);	

	printf("answer = %s%s\n", first,second);
return 0;
}
