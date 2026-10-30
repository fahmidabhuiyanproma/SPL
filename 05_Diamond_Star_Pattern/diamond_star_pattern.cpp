#include<stdio.h>
void main() {
	int i, j, k, n,l,m,h,g,f,d;
	printf("Enter n:");
	scanf_s("%d", &n);
	for (i = 1;i <= n;i++) {
		if (i <= (n + 1) / 2) {
			for (j = 1;j <= ((n + 1) / 2 - i);j++) {
				printf("_");
			}
			for (k = 1;k <= 2 * i - 1;k++) {
				printf("*");
			}
		}
		else {
			for (l = 1;l <= i - (n + 1) / 2;l++) {
				if (i != n) {
					printf("_");
				}
				else {
					printf(" ");
				}
			}
			for (m = 1;m <= (2 * n) - (2 * i - 1);m++) {
				printf("*");
			}
		}
		printf("\n");
	}



}