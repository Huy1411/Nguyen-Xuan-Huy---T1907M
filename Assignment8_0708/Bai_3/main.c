//Tim hang co tong gia tri lon nhat
#include <stdio.h>

void nhap_mang(int a[4][4]) {
    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 4; ++j) {
            printf("Nhap a[%d][%d]:", i, j);
            scanf("%d", &a[i][j]);
        }
    }
}

void in_mang(int a[4][4]) {
    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 4; ++j) {
            printf("%5d", a[i][j]);
        }
        printf("\n");
    }
}

void tong_lon_nhat(int a[4][4]) {
    int max = 0;
    int hang = 0;
    for (int i = 0; i < 4; ++i) {
        int tong_hang = 0;
        for (int j = 0; j < 4; ++j) {
            tong_hang += a[i][j];
        }
        if (i == 0){
            max = tong_hang;
        }
        if (max < tong_hang) {
            max = tong_hang;
            hang = i;
        }
    }
    printf("Hang %d co tong lon nhat \n", hang + 1);
    for (int i = 0; i < 4; ++i) {
        printf("%5d", a[hang][i]);
    }
    printf("\n Tong cua hang %d la %d", hang + 1, max);
}

int main() {
    int a[4][4];
    nhap_mang(a);
    in_mang(a);
    tong_lon_nhat(a);
    return 0;
}



