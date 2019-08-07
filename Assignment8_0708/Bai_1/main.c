// Tim so lon nhat trong mang
#include <stdio.h>
void nhap_mang(int a[],int n){
    for (int i = 0; i < n ; ++i) {
        printf("a[%d] = ",i);
        scanf("%d",&a[i]);
    }
}
void in_mang(int a[], int n) {
    for (int i = 0; i < n; ++i) {
        printf("%5d", a[i]);
    }
}

int tim_so_lon_nhat_trong_mang(int a[],int n) {
    int max = a[0];
    for (int i = 0; i < n; ++i) {
        if (max < a[i]) {
            max = a[i];
        }
    }
    return max;
}

int main() {
    int n;
    printf("Nhap n = ");
    scanf("%d",&n);
    int a[n];
    nhap_mang(a,n);
    in_mang(a,n);
    printf("\nSo lon nhat trong mang %d:", tim_so_lon_nhat_trong_mang(a,n));
    return 0;
}