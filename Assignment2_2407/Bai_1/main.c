#include <stdio.h>

int main() {
    int a, b;
    printf("So thu nhat: a= ");
    scanf("%d", &a);
    printf("So thu 2: b= ");
    scanf("%d", &b);


    if (a > b) {
        if (b != 0) {
            printf("%d/%d=%d", a, b, a / b);
        } else {
            printf("khong co ket qua");
        }
    } else {
        printf("%d*%d=%d", a, b, a * b);
    }
    return 0;
}