#include <stdio.h>
#include <string.h>

int main(void) {
    int N, T;

    scanf("%d %d", &N, &T);
    char queue[N], aux_queue[N];
    scanf("%s", &queue);
    strcpy(aux_queue, queue);

    for (int t=0; t < T; t++) {
        for (int i = 0; i < N; i++) {
            if (queue[i] == 'B' && queue[i + 1] == 'G') {
                aux_queue[i] = 'G';
                aux_queue[i + 1] = 'B';
            }
        }
        strcpy(queue, aux_queue);
    }
    printf("%s\n", queue);

    return 0;
}
