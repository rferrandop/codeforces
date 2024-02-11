#include <stdio.h>

int main(void) {
  char n1[101], n2[101];
  scanf("%s", &n1);
  scanf("%s", &n2);

  for (int i=0; n1[i] != '\0'; i++)
    (n1[i] == n2[i]) ? printf("0") : printf("1");

  return 0;
}
