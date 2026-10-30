#include<stdio.h>
void main() {

	int i, ch, b,n,len=0,vowel=0,consonent=0;
	char *p1, *p2;
	
	char string[100];
	p1 = &string[0];
	printf("Enter string:");
	fgets(string, sizeof(string), stdin);
	p1 = &string[0];
	for (i = 0;string[i]!='\0';i++) {
		p1 = &string[i];
		if (*p1 == 'a' || *p1 == 'A' || *p1 == 'e' || *p1== 'E' || *p1 == 'i' || *p1== 'I' || *p1== 'o' || *p1 == 'O' || *p1== 'u' || *p1== 'U') {
			vowel++;
		}
		else if ((*p1 >= 'a' && *p1 <= 'z') || (*p1 >= 'A' && *p1 <= 'Z')) {
			consonent++;
		}
	}
	printf("vowel:%d",vowel);
	printf("Con:%d", consonent);
}