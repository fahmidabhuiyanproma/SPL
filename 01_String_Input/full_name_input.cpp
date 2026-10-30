#include<stdio.h>
#include<string.h>
void main() {
	char arr[40];
	
	printf("Enter your full name:");
	scanf_s("%s", &arr);
	
	printf("Your name: %s", arr);
}