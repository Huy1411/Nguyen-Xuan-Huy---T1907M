#include <stdio.h>

int main() {
    int n,m;
    printf("Nhap so n: ");
    scanf("%d",&n);
    printf("Nhap so m: ");
    scanf("%d",&m);
    if(n>m){
        printf("So lon hon la: %d",n);
    } else{
        printf("So lon hon la: %d",m);
    }
    return 0;
}