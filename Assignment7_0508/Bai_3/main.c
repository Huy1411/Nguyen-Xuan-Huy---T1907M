#include <stdio.h>

int main() {
    int a[4][3];
    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 3; ++j) {
            printf("Nhap a[%d],[%d]:", i, j);
            scanf("%d", &a[i][j]);
        }
        printf("\n");
    }
    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 3; ++j) {
            printf("%5d", a[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    int tg;
    for (int i = 0; i < 4 ; ++i) {
        for (int j = 0; j < 3 ; ++j) {
            tg = a[i][j];
            a[i][j] = a[j][i];
            a[j][i] = tg;
        }
    }

    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 4; ++j) {
            printf("%5d", a[i][j]);
        }
        printf("\n");
    }
    return 0;
}



