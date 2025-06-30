#include <stdio.h>

int selectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }
    return 1;
}
int main() {
    int n;
    int arr[100];

    printf("Nhap so phan tu cua mang");
    scanf("%d", &n);

    if (n<=0 || n>100) {
        printf("so phan tu khong hop le");
        return 0;
    }
    printf("Nhap cac phan tu");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("before: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    selectionSort(arr, n);
    printf("after: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

return 0;
}

