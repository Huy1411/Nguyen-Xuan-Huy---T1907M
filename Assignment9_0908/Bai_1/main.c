//Nhap chuoi s1,s2. Kiem tra xem chuoi s1 co chua s2 hay khong?
#include <stdio.h>
#include <string.h>
#include <stdbool.h>


bool kiem_tra_chuoi(char s1[], char s2[]) {
    int lg1 = strlen(s1);
    int lg2 = strlen(s2);
    if (lg1 < lg2) {
        return false;
    }
    int j = 0;
    for (int i = 0; i <= lg1;i++) {
        if (s1[i] == s2[j]) {
            j++;
        } else {
            i = i - j;
            j = 0;
        }
        if (j == lg2) {
            return true;
        }
    }
    return false;
}

int main() {
    char s1[20];
    printf("Nhap chuoi s1: ");
    scanf("%s", s1);
    printf("Chuoi s1 sau khi nhap: %s\n", s1);


    char s2[20];
    printf("Nhap chuoi s2: ");
    scanf("%s", s2);
    printf("Chuoi s2sau khi nhap: %s\n", s2);

    if (kiem_tra_chuoi(s1, s2)) {
        printf("s1 co chua s2");
    } else {
        printf("s1 khong chua s2");
    }
    return 0;
}