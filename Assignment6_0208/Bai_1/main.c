#include <stdio.h>

int main() {
    int a[10];
    for (int i = 0; i <10 ; ++i) {
       printf("Nhap phan tu: ");
       scanf("%d",&a[i]);
    }
    float TB = 1;
    float Tong = 0;
    for (int i = 0; i < 10 ; ++i) {
        Tong += a[i];
    }
    TB = Tong/10;
    printf("Trunh binh = %f",TB);
    return 0;
}