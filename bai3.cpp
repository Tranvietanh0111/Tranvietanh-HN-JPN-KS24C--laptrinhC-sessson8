#include <stdio.h>

int main() {
    int n;
    printf("Nhap gia tri cua n: ");
    scanf("%d", &n);
    int matran[3][3];
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            matran[i][j] = n;
        }
    }
    printf("Ma tran vuong :\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d\t", matran[i][j]);
        }
        printf("\n");
    }

    return 0;
}

