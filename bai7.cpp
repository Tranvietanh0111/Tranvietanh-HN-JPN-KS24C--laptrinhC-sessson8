#include<stdio.h>
int main(){
	int arr[3][3]={{1,2,3},{4,5,6},{9,8,7}};
	int sum=0;
	printf("cac phan tu tren duong cheo chinh la:");
	for(int i=0;i<3;i++){
		printf("%d ",arr[i][i]);
		sum= sum+ arr[i][i];
	}		
		
	
	printf("\ntong cua cac phan tu tren duong cheo chinh la: %d",sum);
return 0;
}
