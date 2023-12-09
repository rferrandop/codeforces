#include <stdio.h>
#include <stdbool.h>

bool hasDuplicatedDigits(int y) {
    int digitCount[10] = {0};

    while (y > 0) {
        int digit = y % 10;
        if (digitCount[digit] > 0) {
            return false;
        }
        digitCount[digit]++;
        y /= 10;
    }
    return true;
}

int main(void) {
    int n;
    scanf("%d", &n);

    n++;
    while (!hasDuplicatedDigits(n)) {
        n++;
    }

    printf("%d\n", n);

    return 0;
}
