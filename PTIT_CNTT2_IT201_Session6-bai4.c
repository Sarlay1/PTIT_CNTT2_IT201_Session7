#include <stdio.h>
#include <string.h>

int sapChuoi(char str[]) {
    int len = strlen(str);
    for (int i = 0; i < len -1; i++) {
        for (int j = i + 1; j < len; j++) {
            if (str[i] > str[j]) {
                int temp = str[i];
                str[i] = str[j];
                str[j] = temp;
            }

        }
    }
    return 1;
}

int main() {
    char str[100];
    printf("Nhap chuoi: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    if (strlen(str) == 0) {
        printf("Chuoi khong hop le\n");
        return 0;
    }
    printf("Truoc khi sap xep: %s\n", str);

    sapXepChuoi(str);

    printf("Sau khi sap xep: %s\n", str);
    return 0;
}