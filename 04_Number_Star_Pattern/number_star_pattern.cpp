#include<stdio.h>
#include<math.h>
void main() {
	int i, j, n,k,m,l,u;
	printf("Enter n:");
	scanf_s("%d", &n);
	for (i = 1;i <= n;i++) {
		for (j = 1;j <=i;j++) {
			printf("%d",j);
		}
		for (k = 1;k <= 2*n-(2*i+1);k++) {
			printf("*");
		}
		if (i < n) {
			for (l = i;l >= 1;l--) {
				printf("%d", l);
			}
		}
		else {
			for (l = i - 1;l >= 1;l--) {
				printf("%d", l);
			}
		}
		
		printf("\n");
	}
	
}