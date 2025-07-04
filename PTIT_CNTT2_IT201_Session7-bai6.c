#include<stdio.h>


void merge(int arr[], int left, int mid, int right) {
    int i, j, k;
    int n1 = mid - left + 1;
    int n2 = right - mid;
    int a[n1], b[n2];
    for (int i = 0; i < n1; i++) {
        a[i] = arr[left + i];
    }
    for (int i = 0; i < n2; i++) {
        b[i] = arr[mid + 1 + i];
    }
    i=0; j = 0; k = left;
    while (i < n1 && j < n2) {
        if (a[i]<=b[j]) {
            arr[k++] = a[i++];
        }else {
            arr[k++] = b[j++];
        }
    }
    while (i<n1) {
        arr[k++] = a[i++];
    }
    while (j<n2) {
        arr[k++] = b[j++];
    }
}
void merge_sort(int arr[], int left, int right) {
    if (left < right) {
        int mid = (left + right) / 2;
        merge_sort(arr, left, mid);
        merge_sort(arr, mid + 1, right);
        merge(arr, left, mid, right);
    }
}
void print(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
}
int main() {
    int n;
    printf("Nhap so luong phan tu: ");
    scanf("%d", &n);
    if (n<0 || n>1000) {
        printf("khong hop le!");
        return 1;
    }
    int arr[n];
    printf("Nhap cac phan tu cua mang: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    print(arr, n);
    merge_sort(arr, 0, n-1);
    print(arr, n);
    return 0;
}
