#include<stdio.h>
int stringlength(char arr[]) {
	int i, length = 0;
	for (i = 0;arr[i] != '\0';i++) {
		length++;
	}
	return length;
}
void main() {
	char arr[100];
	printf("Enter arr:");
	fgets(arr, sizeof(arr), stdin);
	int result = stringlength(arr);
	printf("\nstring length:%d", result - 1);
}