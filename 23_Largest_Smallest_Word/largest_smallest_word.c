#include <stdio.h>
#include<string.h>
int main() {
    char string[100];
    char word[20][50];
    int i, j = 0, k = 0, s = 0, l = 0, min, max;
    printf("Enter string:");
    fgets(string, sizeof(string), stdin);
    for (i = 0;string[i] != '\0';i++) {
        if (string[i] == ' ') {
            word[k][j] = '\0';
            k++;
            j = 0;
        }
        else {
            word[k][j] = string[i];
            j++;
        }
    }
    word[k][j] = '\0';
    max = strlen(word[0]);
    min = strlen(word[0]);
    for (i = 0;i <= k;i++) {
        if (max < strlen(word[i])) {
            l = i;
            max = strlen(word[i]);
        }
        if (min > strlen(word[i])) {
            s = i;
            min = strlen(word[i]);
        }
    }
    printf("\nlargest word:%s", word[l]);
    printf("\nsmallest word:%s", word[s]);

    return 0;
}