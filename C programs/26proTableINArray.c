#include <stdio.h>

#define N 26000
#define M 10

int main() {
    double arr[N][M];

    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= M; j++) {
            arr[i-1][j-1] = i * j;
            printf("%.0f\t", arr[i-1][j-1]);
        }
        printf("\n");
    }

    return 0;
}
