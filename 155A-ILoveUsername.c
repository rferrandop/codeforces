#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) {
  int contests;

  scanf("%d", &contests);

  int min_score = 0;
  int max_score = 0;
  int amazing_contests = 0;
  for (int i = 0; i < contests; i++) {
    int n; // Current contest score
    scanf("%d", &n);
    if (!i) {
      min_score = n;
      max_score = n;
    }

    if (n > max_score) {
      amazing_contests++;
      max_score = n;
    } else if (n < min_score) {
      amazing_contests++;
      min_score = n;
    }
  }

  printf("%d", amazing_contests);

  return 0;
}
