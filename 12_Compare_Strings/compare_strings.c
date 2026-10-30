#include<stdio.h>
#include<string.h>

char stringcopy(char string1[], char string2[]) {
	int i, n, j,flag=0;
	printf("Enter range of string 2:");
	scanf_s("%d", &n);
	for (i = 0;i < n;i++) {
		if (string1[i] != '\0' && string2[i] != '\0') {
			if (string1[i] != string2[i]) {
				flag = 1;
				break;
			}
		}
	}
	if (flag == 0) {
		printf("same string");
	}
	else {
		printf("not same");
	}
	
}

void main() {
	char string1[100];
	char string2[100];

	printf("Enter string1:");
	fgets(string1, sizeof(string1), stdin);
	printf("Enter string2:");
	fgets(string2, sizeof(string2), stdin);

	stringcopy(string1, string2);



}