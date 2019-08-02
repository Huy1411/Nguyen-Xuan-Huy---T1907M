#include <stdio.h>

int main() {
    int n;
    printf("So phan tu trong mang n = ");;
    scanf("%d", &n);

    int a[n];
    for (int i = 0; i < n; ++i) {
        printf("Phan tu ");
        scanf("%d", &a[i]);
    }
    int max, min;
    max = a[0];
    min = a[0];

    for (int i = 0; i < n; ++i) {
        if (max < a[i]) {
            max = a[i];
        }
        if (min > a[i]) {
            min = a[i];
        }
    }
    printf("Max = %d \n", max);
    printf("Min = %d \n", min);
    return 0;
}



