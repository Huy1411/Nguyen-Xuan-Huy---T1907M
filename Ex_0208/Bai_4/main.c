#include <stdio.h>

int main() {
    int n;
    do {
        printf("Nhap so tu ban phim n =");
        scanf("%d", &n);
    } while (!(n % 2 == 0));
    printf("Hoan thanh");
    return 0;
}



