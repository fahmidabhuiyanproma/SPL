#include<stdio.h>
void main() {
	int n, i, j, k;
	printf("enter n:");
	scanf("%d", &n);
	for (i = 1;i <= n;i++) {
		for (j = 1;j <= n;j++) {
			if (j == 1) {
				printf("%d", i);

			}
			else if (j == n) {
				printf("%d", n - i);
			}
			else if ((i == 1 && j != 1) || (i == 1 && j != n) || (i == n && j != 1) || (i == n && j != n)) {
				printf("+");


			}
			else if ((i == (n + 1) / 2) && (j == (n + 1) / 2)) {
				printf("*");
			}

			else {
				printf(" ");
			}
		}
		printf("\n");
	}

}