#include<stdio.h>
char function(char arr[]) {
	printf("%s", arr);
}
int main() {
	char arr[100];
	fgets(arr, sizeof(arr), stdin);
	function(arr);
	return 0;
}