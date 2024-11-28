#include<stdio.h>
int main(){
	int arr[3][3]={{1,2,3},{4,5,6},{9,8,7}};
	int sum=0;
	printf("cac phan tu tren duong phu la:");
	for(int i=0;i<3;i++){
		printf("%d ",arr[i][3-1-i]);
		sum= sum+ arr[i][3-1-i];
	}		
		
	
	printf("\ntong cua cac phan tu tren duong cheo phu la: %d",sum);
return 0;
}
