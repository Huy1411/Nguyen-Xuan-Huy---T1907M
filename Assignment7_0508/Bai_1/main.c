#include <stdio.h>

int main() {
    int a[4][4];
    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 4; ++j) {
            printf("Nhap a[%d],[%d]:", i, j);
            scanf("%d", &a[i][j]);
        }
        printf("\n");
    }
    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 4; ++j) {
            printf("%5d", a[i][j]);
        }
        printf("\n");
    }

    float S1 = 0, tb1;
    for (int i = 0; i < 4; ++i) {
        S1 += a[i][i];
    }
    tb1 = S1 / 4;
    printf(" Tong gia tri duong cheo 1 la: %f\n", S1);
    printf("Trung binh cong duong cheo 1 la: %f\n", tb1);
    float S2 = 0, tb2;
    for (int i = 0; i < 4; ++i) {
        S2 += a[i][4 - i - 1];
    }
    tb2 = S2 / 4;
    printf(" Tong gia tri duong cheo 2 la: %f\n", S2);
    printf("Trung binh cong duong cheo 2 la %f\n", tb2);
    return 0;
}