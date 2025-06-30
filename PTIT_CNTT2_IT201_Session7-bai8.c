#include <stdio.h>

int main () {
    int rows, cols, k;
    int arr[100][100];

    printf("Nhap so hang");
    scanf("%d", &rows);
    printf("Nhap so cot");
    scanf("%d", &cols);

    if (rows <= 0 || cols <= 0 || rows >=100 || cols >=100) {
        printf("khong hop le");
        return 0;
    }

    printf("Nhap cac phan tu cua mang");
    for (int i=0;i<rows;i++) {
        for (int j=0;j<cols;j++) {
            scanf("%d", &arr[i][j]);
        }
    }
    printf("Nhap chi so cot muon sap (0-%d)", cols -1 );
    scanf("%d", &k);

    for (int i=0;i<rows-1;i++) {
        for (int j=i + 1;j<rows;j++) {
            if (arr[i][k] > arr[j][k]) {
                for (int col=0;col<cols;col++) {
                    int temp = arr[i][col];
                    arr[i][col] = arr[j][col];
                    arr[j][col] = temp;
                }
            }
        }
    }
    printf("Ma tran sau khi sap xep cot %d:\n", k);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}



