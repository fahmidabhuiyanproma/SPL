#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

bool result(char *str, int len) {
    int i = 0, j = len - 1;
    while (i <= j) {
        if (str[i] == str[j] || abs(str[i] - str[j]) == 2) {
            i++;
            j--;
        } else {
            return 0;
        }
    }
    return 1;
}

int main(void) {
    int num;
    scanf("%d", &num);
    char *str = (char *)malloc((num + 1) * sizeof(char));
    scanf("%s", str);
    if (str == NULL) {
        return 1;
    }

    else if (result(str, num)) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }
    return 0;
}