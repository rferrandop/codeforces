#include <stdio.h>

int main(void) {
    int n;
    int x, y, z;

    scanf("%d", &n);
    int xsum = 0;
    int ysum = 0;
    int zsum = 0;
    while(n--) {
        scanf("%d %d %d", &x, &y, &z);
        xsum += x;
        ysum += y;
        zsum += z;
    }

    if (xsum == 0 && ysum == 0 && zsum == 0) {
        printf("YES");
    } else {
        printf("NO");
    }
}

