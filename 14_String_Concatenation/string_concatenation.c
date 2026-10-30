#include<stdio.h>
#include<string.h>
char stringconcatenate(char string1[], char string2[]) {
	int n, i,length;
	length = strlen(string1);
	printf("Enter the range of string2:");
	scanf_s("%d", &n);
	for (i = 0;i < n;i++) {
		if (string1[i] != '\0'&& string2[i]!='\0') {
			string1[(length - 1) + i] = string2[i];
		}
	}
	
	printf("\nstring concatenate of string1:%s", string1);
}
void main() {
	char string1[100];
	char string2[100];
	printf("Enter string1:");
	fgets(string1, sizeof(string1), stdin);
	printf("Enter string2:");
	fgets(string2, sizeof(string2), stdin);
	stringconcatenate(string1, string2);

}