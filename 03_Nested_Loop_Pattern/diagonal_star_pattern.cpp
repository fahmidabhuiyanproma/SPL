#include<stdio.h>
void main() {
	int n, i, k, j, m, l, z, u;
	printf("Enter n:");
	scanf_s("%d", &n);
	for (i = 1;i <= n;i++) {
		for (j = 1;j <= n;j++) {
			if ((j == 1 || j == n) || (i == j)) {
				printf("*");
			}
			else {
				printf(" ");
			}

		}
		printf("\n");
	}
}