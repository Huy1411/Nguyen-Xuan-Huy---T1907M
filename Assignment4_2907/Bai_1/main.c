#include <stdio.h>


int main() {
    int x,y,z;
    do{
        printf("Canh x =");
        scanf("%d",&x);
        printf("Canh y =");
        scanf("%d",&y);
        printf("Canh z =");
        scanf("%d",&z);

    } while(!(x+y>z && x+z>y && y+z>x));

    printf("la 3 canh cua tam giac\n");

    return 0;
}