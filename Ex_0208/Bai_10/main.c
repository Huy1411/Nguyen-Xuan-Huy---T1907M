#include <stdio.h>

int main() {
    int n;
    printf("Nhap so phan tu trong mang: ");
    scanf("%d", &n);

    int a[n];
    for (int i = 0; i < n; ++i) {
        printf("Nhap phan tu: ");
        scanf("%d", &a[i]);
    }

    float Tong = 0, Tb;
    for (int i = 1; i <= n; ++i) {
        Tong += a[i];
    }
    Tb = Tong/n;
    printf(" Trung binh cong cua mang: Tb = %f", Tb);
    return 0;
}



