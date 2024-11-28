#include<stdio.h>
int main(){
	int arr[2][3]={{ 100,2,3},{9,8,7}};
	int max= arr[0][0];
	for(int i=0;i<2;i++){
		for(int j=0;j<3;j++){
			if(arr[i][j]>max){
				max=arr[i][j];
			}
		}
	}
	printf("phan tu lon nhat trong mang la: %d",max);
return 0;
}
