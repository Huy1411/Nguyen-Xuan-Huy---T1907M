#include <stdio.h>
#include <math.h>

int main() {
    int a, b, c;
    printf("a = ");
    scanf("%d", &a);
    printf("b = ");
    scanf("%d", &b);
    printf("c = ");
    scanf("%d", &c);

    printf("Phuong trinh: %dx^2 ", a);
    if (b < 0) {
        printf("%dx ", b);
    } else {
        printf("+ %dx", b);
    }
    if (c < 0) {
        printf("%d = 0\n", c);
    } else {
        printf("+ %d = 0\n", c);
    }

    float delta = b * b - 4 * a * c;

    if (delta < 0) {
        printf("Phuong trinh vo nghiem \n");
    } else if (delta == 0) {
        int x = -b / (2 * a);
        printf("Phuong trinh co nghiem kep: x1 = x2 = %d", x);
    } else {
        float x1 = (-b + sqrt(delta))/(2*a);
        float x2 = (-b - sqrt(delta))/(2*a);
        printf("Phuong trinh co 2 nghiem:\n x1 = %f \n x2 = %f", x1,x2);
    }

    return 0;
}