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
    int Fn_1 = 1, Fn_2 = 1;
    for (int i = 3; i <= n; ++i) {
        int Fi = Fn_1+ Fn_2;
        Fn_1 = Fn_2;
        Fn_2 = Fi;
    }
    printf("Fn = %d",Fn_2);
    return 0;
}