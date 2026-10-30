#include<stdio.h>
void main() {
	int i, *p1, *p2, maxdifference, mediumdifference;
	int arr[5];
	p1 = &arr[0];
	p2 = &arr[1];
	printf("Enter arr element:");
	for (i = 0;i < 5;i++) {
		p1 = &arr[i];
		scanf_s("%d", &*p1);
	}
	maxdifference = arr[1] - arr[0];
	for (i = 0;i < 5;i++) {
		p1 = &arr[i];
		p2 = &arr[i+1];
		mediumdifference = (*p2 - *p1);
		if (mediumdifference > maxdifference) {
			maxdifference = mediumdifference;
		}
	}
	printf("\nMaximumdifference value:%d", maxdifference);


}