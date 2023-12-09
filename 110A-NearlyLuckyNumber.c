#include <stdio.h>

long long N;
int main(void) {
  scanf("%lld", &N);

  int count;
  long long n = N % 10;
  while (N > 0) {
    if (n == 4 || n == 7) count++;
    N /= 10;
    n = N % 10;
  }

  if (count == 4 || count == 7)
    printf("YES");
  else 
    printf("NO");

  return 0;
}
