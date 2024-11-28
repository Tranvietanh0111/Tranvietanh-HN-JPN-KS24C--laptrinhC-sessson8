#include <stdio.h>

int main() {
    int arr[] = {1, 3, 5, 7, 9, 11};
    int pt, co;
    printf("Nhap vao mot phan tu: ");
    scanf("%d", &pt);
    for (int i = 0; i <sizeof(arr) / sizeof(arr[0]); i++) {
        if (arr[i] ==pt) {
            printf("Vi tri phan tu trong mang la: %d\n", i);
            co = 1;
            break; 
        }
        else{
        	co=0;
		}
    }
    if (co==0) {
        printf("Phan tu khong ton tai trong mang.\n");
    }

    return 0;
}
