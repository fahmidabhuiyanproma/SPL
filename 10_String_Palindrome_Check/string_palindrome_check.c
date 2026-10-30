#include<stdio.h>
#include<string.h>
void main() {
	int i , len = 0,j,count=0;
	char string1[200];
	char string2[200];
	char singlechar;
	printf("Enter string 1:");
	fgets(string1, sizeof(string1), stdin);
	for (i = 0;string1[i] != '\0';i++) {
		len++;
	}
	for (i = 0;string1[i] != '\0';i++) {
		string2[i] = string1[(len - 1) - i];
	}
	string2[i] = '\0';
	printf("%s", string2);
	int result = strcmp(string1, string2-1+1);
	printf("\n%d", result);
}