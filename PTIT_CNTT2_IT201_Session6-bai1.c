#include <stdio.h>

int bubbleSort(int a[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (a[j] > a[j + 1]) {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
    return 1;
}

int main() {
    int n;
    int arr[1000];

    printf("Nhap so luong phan tu cua mang");
    scanf("%d", &n);

    if (n<=0 || n>1000) {
        printf("Khong hop le");
        return 0;
    }

    printf("Nhap cac phan tu cua mang");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("before: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    bubbleSort(arr, n);

    printf("after: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}