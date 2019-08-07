//in mang da sap xep
#include <stdio.h>

void nhap_mang(int a[], int n) {
    for (int i = 0; i < n; ++i) {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }
}

void in_mang(int a[], int n) {
    for (int i = 0; i < n; ++i) {
        printf("%5d", a[i]);
    }
}

void sap_xep_mang_tang_dan(int a[], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (a[j] > a[j + 1]) {
                int x = a[j];
                a[j] = a[j + 1];
                a[j + 1] = x;
            }
        }
    }
    for (int i = 0; i < n; ++i) {
        printf("%5d", a[i]);
    }
}

void sap_xep_mang_giam_dan(int a[], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (a[j] < a[j + 1]) {
                int x = a[j];
                a[j] = a[j + 1];
                a[j + 1] = x;
            }
        }
    }
    for (int i = 0; i < n; ++i) {
        printf("%5d", a[i]);
    }
}

int main() {
    int n;
    printf("Nhap n = ");
    scanf("%d", &n);
    int a[n];
    nhap_mang(a, n);
    in_mang(a, n);
    printf("\nSap xep tang dan: ");
    sap_xep_mang_tang_dan(a, n);
    printf("\nSap xep giam dan: ");
    sap_xep_mang_giam_dan(a, n);
    return 0;
}



