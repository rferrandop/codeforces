#include <stdio.h>
#include <stdlib.h>

unsigned int N;
int main(int argc, char **argv) {
  scanf("%d", &N);

  int p;
  float orange_volume = 0;
  for (int i = 0; i < N; i++) {
    scanf("%d", &p);
    orange_volume += (float)p;
  }

  printf("%f", (orange_volume / N));

  return 0;
}
