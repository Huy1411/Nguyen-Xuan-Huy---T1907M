#include <stdio.h>

int main() {
    int n,i, j ;
    printf("Nhap so n:");
    scanf("%d", &n);
    for (i = 1; i <= n; ++i) {
        int dem = 0;
        for (j = 1; j <= i ; j++) {
            if (i % j == 0) {
                dem ++;
            }
        }
        if (dem == 2) {
            printf(" %d \t", i);
        }
    }
    return 0;
}