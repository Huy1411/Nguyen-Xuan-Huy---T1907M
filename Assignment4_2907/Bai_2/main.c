#include <stdio.h>

int main() {
    int n, s=0;
    printf("Nhap so n= ");
    scanf("%d", &n);

    for (int i = 1; i < n; ++i) {
        if (n % i == 0) {
            s += i;
        }
    }
    if (s == n) {
        printf("%d la so hoan hao \n", n);
    } else {
        printf("%d khong la so hoan hao\n", n);
    }

    return 0;
}


