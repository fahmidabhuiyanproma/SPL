#include<stdio.h>
void main() {
	int n, i, j, k;
	printf("Enter n:");
	scanf("%d", &n);
	for (i = 1;i <= n;i++) {
		for (j = 1;j <= n;j++) {
			if (n % 2 != 0) {
				if ((i + j) % 2 == 0) {
					printf("*");
				}
				else {
					printf("+");
				}
			}
			else {
				if (j % 2 != 0) {
					printf("*");
				}
				else {
					printf("+");
				}
			}
		}
		printf("\n");
	}

}