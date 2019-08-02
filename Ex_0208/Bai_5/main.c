#include <stdio.h>

int main() {
    int n,m;
    printf("Chieu rong n = ");
    scanf("%d",&n);
    printf("Chieu dai m =");
    scanf("%d",&m);
    for (int i = 0; i < n ; ++i) {
        for (int j = 0; j < m ; ++j) {
            printf("*\t");
        }
        printf("\n");
    }
    return 0;
}



