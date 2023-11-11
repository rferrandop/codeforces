#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int matrix[5][5];
    int k = 0;

    for (int j = 0; j < 5; j++)
        scanf("%d %d %d %d %d", &matrix[0][j], &matrix[1][j], &matrix[2][j], &matrix[3][j], &matrix[4][j]);

    for (int j = 0; j < 5; j++)
        for (int i = 0; i < 5; i++)
            if (matrix[i][j]) {
                int res = abs((i - 2)) + abs((j - 2));
                printf("%d\n", res);
                return 0;
            }
    return 0;
}

