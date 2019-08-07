//Tim so gan lon nhat trong mang
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

int tim_so_gan_lon_nhat_trong_mang(int a[],int n) {
    int max = a[0];
    int n_max = a[0];
    for (int i = 1; i < n; ++i) {
        if (max < a[i]) {
            n_max = max;
            max = a[i];
        } else{
            if(n_max < a[i]|| n_max == max){
                n_max = a[i];
            }
        }
    }
    return n_max;
}
int main() {
    int n;
    printf("Nhap n = ");
    scanf("%d",&n);
    int a[n];
    nhap_mang(a,n);
    in_mang(a,n);
    printf("\nSo gan lon nhat trong mang: %d", tim_so_gan_lon_nhat_trong_mang(a,n));
    return 0;
}


