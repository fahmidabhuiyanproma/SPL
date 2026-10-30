#include<stdio.h>
void main() {
char string2[100];
char string1[100];
int i = 0, ch, len= 0,j;
printf("Enter string:");
fgets(string2, sizeof(string2), stdin);
for (i = 0;string2[i] != '\0';i++) {
	len++;
}
 
for (j = 0;i = len - 1;i >= 0,i--, j++) {
	string1[j] = string2[i];
}
printf("\n%s", string1);



}