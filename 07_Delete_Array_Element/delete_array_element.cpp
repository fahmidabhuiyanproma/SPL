#include<stdio.h>
void main() {
	int i, j, k, l, m=0, n, h=0,max,row,col;
	printf("Enter arr row:");
	scanf_s("%d", &row);
	
	int arr[100];
	int rev[100];
	printf("Enter arr:");
	for (i = 0;i < row;i++) {
		
			scanf_s("%d", &arr[i]);
		
	}
	printf("Enter delete inde:");
	scanf_s("%d", &n);
	for (i = 0;i < row;i++) {
		if (i != n) {
			printf("%d", arr[i]);
		}
	}
	
}