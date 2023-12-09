#include <stdio.h>
#include <ctype.h>

char word[100];
int main(void) {
  scanf("%s", &word);

  int i = 0;
  char c = word[0];
  int upper_words = 0;
  while (c != NULL) {
    if (c >= 'A' && c <= 'Z') upper_words++;
    i++;
    c = word[i];
  }

  if (upper_words > (i - upper_words)) {
    for (int j=0; j<i; j++)
      word[j] = toupper(word[j]);
  } else {
    for (int j=0; j<i; j++)
      word[j] = tolower(word[j]);
  }

  printf("%s\n", word);

  return 0;
}
