#include <stdio.h>

int main() {
    int n, i =1;
    printf("Nhap n =");
    scanf("%d",&n);

    int a = 1;
    while (i<=n){
        a *= i;
        i++;
    }
    printf("n! = %d",a);
    return 0;
}



