#include <stdio.h>
#include<string.h>

int main()
{
    char string[100];
    char word[50];
    int i, count = 0, j, k;
    printf("Enter string:");
    fgets(string, sizeof(string), stdin);
    for (i = 0;string[i] != '\0';i++) {
        for (j = i + 1;string[j] != '\0';j++) {
            if (string[i] == string[j]) {
                for (k = j;string[k] != '\0';k++) {
                    string[k] = string[k + 1];
                }
            }
        }
    }

    printf("remove word:%s", string);
    return 0;
}