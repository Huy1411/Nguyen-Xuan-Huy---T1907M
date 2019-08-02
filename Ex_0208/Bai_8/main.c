#include <stdio.h>

int main() {
    int i, S = 0;
    printf("100 so le dau tien: \t");
    for (int i = 1; i <=200; i++) {
        if (i % 2 != 0) {
            printf("%d \t", i);
            S = S + i;
        }
    }
    printf("\n");
    printf("Tong 100 so le dau tien: S = %d;", S);
    return 0;
}



