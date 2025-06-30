#include<stdio.h>
#include<stdlib.h>\


void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
void sort(int arr[], int n, int x) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i+1; j < n ; j++) {
            int count1 = abs(arr[i] - x);
            int count2 = abs(arr[j] - x);
            if (count1 > count2 || (count1 == count2 && arr[i] > arr[j])) {
                swap(&arr[i], &arr[j]);
            }
        }
    }
}
int main() {
    int n, x;
    printf("Nhap so luong phan tu: ");
    scanf("%d", &n);
    if (n<0 || n>100) {
        printf("khong hop le!");
        return 1;
    }
    int arr[n];
    printf("Nhap cac phan tu cua mang: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Nhap x: ");
    scanf("%d", &x);
    sort(arr, n, x);
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}