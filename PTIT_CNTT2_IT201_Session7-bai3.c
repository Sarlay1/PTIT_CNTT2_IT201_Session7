#include <stdio.h>

int insertionSort(int arr[], int n) {
for (int i = 1; i < n; i++) {
int key = arr[i];
int j = i - 1;

while (j >= 0 && arr[j] > key) {
arr[j + 1] = arr[j];
j--;
}
arr[j + 1] = key;
}
return 1;
}

int main() {
    int n;
int arr[1000];
printf("Nhap so luong phan tu");
scanf("%d", &n);
if (n <=0 || n > 1000) {
printf("So phan tu khong hop le");
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

insertionSort(arr, n);

printf("after: ");
for (int i = 0; i < n; i++) {
printf("%d ", arr[i]);
}
printf("\n");
return 0;
}
