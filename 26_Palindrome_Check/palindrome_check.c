#include <stdio.h>
#include <string.h>

int result(char string[]) {
  int length = strlen(string);
  for (int i = 0; i < length / 2; i++) {
    if (string[i] != string[length - 1 - i]) {
      return 0;
    }
  }
  return 1;
}

int main() {
  int num;
  scanf("%d", &num);
  while (num--) {
    char string[100];
    scanf("%s", string);
    int length = strlen(string);

    if (length % 2 == 1) {
      printf("No\n");
      continue;
    }

    int count = 0;
    for (int i = 0; i < length / 2; i++) {
      if (string[i] != string[length - 1 - i]) {
        count++;
      }
    }

    if (count % 2 == 0) {
      printf("Yes\n");
    } else {
      printf("No\n");
    }
}
return 0;
}