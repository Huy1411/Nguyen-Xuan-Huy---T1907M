#include <stdio.h>
#include <string.h>

void sap_xep_chuoi(char s[][20],int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; ++j) {
            if (strcmp(s[j], s[j+1]) > 0) {
                char t[20];
                strcpy(t, s[j]);
                strcpy(s[j], s[j+1]);
                strcpy(s[j+1], t);
            }
        }
    }
    printf("\nSap xep thu tu cua cac chuoi:");
    for (int i = 0; i < n; i++)
        printf("\n%s", s[i]);
}

int main() {
    char s[4][20];
    for (int i = 0; i < 4; ++i) {
        printf("Nhap chuoi %d:", i);
        scanf("%s", s[i]);
    }
    sap_xep_chuoi(s, 4);
    return 0;
}


