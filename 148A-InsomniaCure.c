#include <stdio.h>
#include <stdlib.h>

unsigned long K, L, M, N, D;
int main(int argc, char *argv[]) {
  scanf("%ld", &K);
  scanf("%ld", &L);
  scanf("%ld", &M);
  scanf("%ld", &N);
  scanf("%ld", &D);

  unsigned long damaged = 0;
  for (unsigned long d = 1; d <= D; d++) {

    if (!(d % K) || !(d % L) || !(d % M) || !(d % N))
      damaged++;
  }
  printf("%ld", damaged);

  return EXIT_SUCCESS;
}
