#include <stdio.h>


int main(void) {
  int n;
  scanf("%d", &n);
  char stones[n];
  scanf("%s", stones);

  int count = 0;
  for (int i=0; i<n; i++) {
    if (stones[i] == stones[i+1]) count++;
  }
  printf("%d", count);


  return 0;
}
