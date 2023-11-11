#include <stdio.h>
#include <string.h>

int main(void) {
    char borze[200];
    scanf("%s", &borze);

    int len = strlen(borze);
    for (int i = 0; i < len; i++) {
        if (borze[i] == '-') {
            if (borze[i+1] == '.') printf("1");
            else if (borze[i+1] == '-') printf("2");
            i++;
        } else if (borze[i] == '.') {
            printf("0");
        }
    }

    return 0;
}
