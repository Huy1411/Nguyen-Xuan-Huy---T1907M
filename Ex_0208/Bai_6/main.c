#include <stdio.h>

int main() {
    float n, i = 1;
    printf("Nhap n =");
    scanf("%f", &n);
    float S = 0;
    while (i <= n) {
        S = S + (1 / i);
        i++;
    }
    printf("S= %f", S);
    return 0;
}



