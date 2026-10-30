#include<stdio.h>
void main() {
	int i, n, k, l, m, row, col, j, determinent = 0;
	printf("Enter row:");
	scanf_s("%d", &row);
	printf("Enter col:");
	scanf_s("%d", &col);
	int arr[10][10];
	for (i = 0;i < row;i++) {
		for (j = 0;j < col;j++) {
			scanf_s("%d", &arr[i][j]);
		}
		printf("\n");
	}
	for (i = 0;i < row;i++) {
		for (j = 0;j < col;j++) {
			determinent = ((arr[0][0] * (arr[1][1] * arr[2][2] - arr[1][2] * arr[2][1])) - (arr[0][1] * (arr[1][0] * arr[2][2] - arr[1][2] * arr[2][0])) + (arr[0][2] * (arr[1][0] * arr[2][1] - arr[1][1] * arr[2][0])));
		}
	}
	printf("\ndet:%d", determinent);
}