#include <stdio.h>
#include <math.h>

int main() {
    long int n;
    printf("Nhap so n= ");
    scanf("%ld", &n);
    if (n <= 3 && n > 0) {
        printf("%d la so nguyen to", n);
        return 0;
    }
    if (n%2 == 0){
        printf("%ld khong la so nguyen to",n);
        return 0;
    }

    int a = sqrt(n);
    int dem_so_luong_uoc = 0;
    for (int i = 1; i <= a; i++) {
        if (a % i == 0) {
            dem_so_luong_uoc++;
        }
        if(dem_so_luong_uoc >2){
            break;
        }
    }
    if (dem_so_luong_uoc == 2) {
        printf("%ld la so nguyen to \n", n);
    } else {
        printf("%ld khong la so nguyen to \n", n);
    }
    return 0;
}


