#include <stdio.h>

int isPrime(int n) {
  for (int i = 2; i < n; i++) {
    if (n % i == 0 && i != n) return 0;
  }
  return 1;
}

int main(void) {
  int n, m;
  scanf("%d %d", &n, &m);

  int k = n + 1;
  int flag = 0;
  while (k != m) {
    if (isPrime(k)) {
      flag = 1;
    }
    k++;
  }
  flag == 1 ? printf("YES") : printf("NO");

  return 0;
}
