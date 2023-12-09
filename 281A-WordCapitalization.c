#include <stdio.h>

char word[1000];
int main(void) {

  scanf("%s", &word);

  if (word[0] >= 97 && word[0] <= 122) {
    word[0] -= 32;
  }

  printf("%s\n", word);

  return 0;
}
