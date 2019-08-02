#include <stdio.h>

int main() {
    int n;
    printf("Nhap n =");
    scanf("%d", &n);

    if (n < 1) {
        printf("Khong tim thay so F");
    }
    if (n == 1 || n == 2) {
        printf("F(%d) = 1");
    }
    int Fn1 = 1, Fn2 = 1 , Fi;
    for (int i = 3; i <= n; ++i) {
        Fi = Fn1+ Fn2;
        Fn1 = Fn2;
        Fn2 = Fi;
    }
    printf("Fn = %d",Fi);
    return 0;
}