#include <stdio.h>

int main(int argc, char **argv) {
  int stops;
  scanf("%d", &stops);

  int capacity = 0, current_capacity = 0;
  for (int i = 0; i < stops; i++) {
    int a, b;
    scanf("%d %d", &a, &b);
    current_capacity -= a;
    current_capacity += b;

    if (current_capacity > capacity) {
      capacity = current_capacity;
    }
  }

  printf("%d", capacity);

  return 0;
}
