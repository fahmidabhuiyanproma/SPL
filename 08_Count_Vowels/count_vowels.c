#include<stdio.h>


void main() {
	int result, i=0, j, length = 0,ch,vowel=0;
	char arr[100];
	
	printf("Enter string 1:");
	fgets(arr, sizeof(arr), stdin);
	while((ch=arr[i])!='\0'){
		if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
			vowel++;
		}
		i++;

	}
	printf("%d", vowel);

}