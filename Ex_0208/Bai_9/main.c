#include <stdio.h>

int main() {
    int n;
    printf("So phan tu trong mang: n =");
    scanf("%d",&n);

    int a[n];
    for (int i = 0; i < n ; ++i) {
        printf("Phan tu =");
        scanf("%d",&a[i]);
    }
    return 0;
}



