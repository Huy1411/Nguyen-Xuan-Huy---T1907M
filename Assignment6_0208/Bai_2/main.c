#include <stdio.h>

int main() {
    int n;
    printf("Nhap so phan tu: ");
    scanf("%d", &n);
    int a[n], i;
    while (i < n) {
        printf("Nhap phan tu a[%d]:", i);
        scanf("%d", &a[i]);
        int a_j = 0;
        for (int j = 0; j < i; ++j) {
            a_j = a[j];
            if (a[j] == a[i]) {
                break;
            }
        }
        if (a_j == a[i]) {
            printf("Moi nhap lai\n");
        } else {
            i++;
        }
    }
    return 0;
}



