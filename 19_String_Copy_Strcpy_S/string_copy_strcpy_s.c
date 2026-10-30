#include<stdio.h>
#include<string.h>
void main() {
	char string1[100];
	char string2[100];
	printf("Enter string1:");
	fgets(string1,sizeof(string1), stdin);
	strcpy_s(string2,string1);
	printf("\n%s", string2);
}