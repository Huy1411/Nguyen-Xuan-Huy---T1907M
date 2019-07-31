#include <stdio.h>

int main() {
    int n;
    printf("Nhap 1 so :");
    scanf("%d",&n);

    int x=0,a=n;
    while(a!=0) {
        x = x * 10 + a % 10;
        a = a/10;
    }
    if(n == x){
        printf("%d la so thuan nghich \n",n);
    } else{
        printf("%d khong phai la so thuan nghich \n",n);
    }

    return 0;
}