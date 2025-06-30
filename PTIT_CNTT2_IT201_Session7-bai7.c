#include <stdio.h>

int main () {
    int n;
    int a[100];
    int b[100];
    int i, k=0;

    printf("Nhap so luong phan tu");
    scanf("%d", &n);

    if (n<=0 || n>100) {

        printf("Phan tu khong hop le");
        return 0;
    }

    printf("Nhap cac phan tu");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("Truoc khi sap xep: [ ");
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
        if (i < n - 1) {
            printf(", ");
        }
        printf("]\n");

        for (i = 0; i < n; i++) {
            if (a[i] < 0)
                b[k++] = a[i];
        }

        for (i = 0; i < n; i++) {
            if (a[i] == 0)
                b[k++] = a[i];
        }

        for (i = 0; i < n; i++) {
            if (a[i] > 0)
                b[k++] = a[i];
        }
        printf("Sau khi sap xep: [ ");
        for (i = 0; i < n; i++) {
            printf("%d", b[i]);
            if (i < n - 1) printf(", ");
        }
        printf(" ]\n");
    }
    return 0;
}

