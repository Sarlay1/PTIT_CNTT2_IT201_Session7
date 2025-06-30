#include<stdio.h>
void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
void tangdan(int arr[], int n) {
    for (int i = 0; i < n-1; i++) {
        for (int j = i+1; j < n; j++) {
            if (arr[i] > arr[j]) {
                swap(&arr[i], &arr[j]);
            }
        }
    }
}
void giamdan(int arr[], int n) {
    for (int i = 0; i < n-1; i++) {
        for (int j = i+1; j < n; j++) {
            if (arr[i] < arr[j]) {
                swap(&arr[i], &arr[j]);
            }
        }
    }
}
int main() {
    int n;
    printf("Nhap so phan tu: ");
    scanf("%d", &n);
    if (n<0 || n>100) {
        printf("khong hop le!");
        return 1;
    }
    int arr[n];
    int chan[n], le[n];
    int count1 = 0, count2 = 0;
    printf("Nhap cac phan tu cua mang: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        if (arr[i] % 2 == 0) {
            chan[count1++] = arr[i];
        }else {
            le[count2++] = arr[i];
        }
    }
    tangdan(chan, count1);
    giamdan(le, count2);
    int value[n];
    for (int i = 0; i < count1; i++) {
        value[i] = chan[i];
    }
    for (int i = 0; i < count2; i++) {
        value[count1 +i] = le[i];
    }
    for (int i = 0; i < n; i++) {
        printf("%d ", value[i]);
    }
    return 0;

}