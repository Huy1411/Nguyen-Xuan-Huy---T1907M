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

    int b[4][3];
    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 3; ++j) {
            printf("Nhap b[%d],[%d]:", i, j);
            scanf("%d", &b[i][j]);
        }
        printf("\n");
    }
    printf("Ma tran 1:\n");
    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 3; ++j) {
            printf("%5d", a[i][j]);
        }
        printf("\n ");
    }
    printf("Ma tran 2:\n");

    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 3; ++j) {
            printf("%5d", b[i][j]);
        }
        printf("\n");
    }

    printf("\n");
    printf("Tong 2 ma tran:\n");
    int c[4][3];
    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 3; ++j) {
            c[i][j] = a[i][j] + b[i][j];
        }
    }
    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 3; ++j) {
            printf("%5d", c[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    printf("Hieu 2 ma tran: \n");

    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 3; ++j) {
            c[i][j] = a[i][j] - b[i][j];
        }
    }

    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 3; ++j) {
            printf("%5d", c[i][j]);
        }
        printf("\n");
    }
    return 0;
}



