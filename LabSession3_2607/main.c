#include <stdio.h>
#include <math.h>

int main() {
    int x,y,z;
    printf("Canh x =");
    scanf("%d",&x);
    printf("Canh y =");
    scanf("%d",&y);
    printf("Canh z =");
    scanf("%d",&z);

    if(x+y>z && x+z>y && y+z>x){
        int c;
        double p;
        int s;
        c = x+y+z;
        p= (double)c/2;
        s= sqrt(p*(p-x)*(p-y)*(p-z));

        printf("Day la 3 canh cua tam giac \n");
        printf("Chu vi tam giac la: %d \n",c);
        printf("Dien tich tam gia la: %d",s);
    }else{
        printf("Day khong phai la 3 canh cua tam giac");
    }
    return 0;
}