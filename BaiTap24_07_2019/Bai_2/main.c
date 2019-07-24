#include <stdio.h>

int main() {
    int a, b,c;
    printf("So nguyen thu nhat: a = ");
    scanf("%d", &a);
    printf("So nguyen thu 2: b = ");
    scanf("%d", &b);
    printf("So nguyen thu 3: c =");
    scanf("%d",&c);

    int max=a,min=a;

    if(max<b){
        max = b;
    }
    if(max<c){
        max = c;
    }

    if(min>b){
        min = b;
    }
    if(min>c){
        min = c;
    }

    printf("So lon nhat la: %d\n",max);
    printf("So nho nhat la: %d\n",min);


//    if (a>b) ;{
//        if (b>c) {
//            printf("So nho nhat la: %d\n", c);
//            printf("So lon nhat la: %d\n",a);
//        } else {
//            if(a>c){
//                printf("So lon nhat la: %d\n",a);
//            } else{
//                printf("So lon nhat la: %d\n",c);
//            }
//            printf("So nho nhat la: %d\n",b);
//        }
//    } else {
//        if (a>c) {
//            printf("So nho nhat la: %d\n", c);
//            printf("So lon nhat la: %d\n",b);
//        } else {
//            if(b>c){
//                printf("So lon nhat la: %d\n",b);
//            } else{
//                printf("So lon nhat la: %d\n",c);
//            }
//            printf("So nho nhat la: %d\n",a);
//        }
//    }
    return 0;
}