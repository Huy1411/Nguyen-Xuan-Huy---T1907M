#include <stdio.h>

int main() {
    int n, i;
    printf("Nhap n = ");
    scanf("%d", &n);
    if (n < 10) {
        printf("Khong tim thay so nao");
    }
    for (int i = 10; i < n; ++i) {

        int x = 0, a = i;
        while (a != 0) {
            x = x * 10 + a % 10;
            a = a / 10;
        }
        if (x == i) {
            printf("x%d\t", i);
        }
    }
    return 0;
}


