#include <stdio.h>

int main() {
    int x, y;
    printf("Nhap so x: ");
    scanf("%d", &x);
    printf("Nhap so y: ");
    scanf("%d", &y);

    int tg = x;
    x = y;
    y = tg;

    printf("Sau khi hoan doi gia tri: x = %d, y = %d", x, y);
    return 0;
}



