#include <stdio.h>

int main (){
	
	int a,b;
	printf("moi ban nhap so dong ");
	scanf("%d",&a);
	printf("moi ban nhap so cot ");
	scanf("%d",&b);
	int array[a][b];
	int size=sizeof(array)/sizeof(int);
	
	for (int i=0;i<a;i++){
		for (int j=0;j<b;j++){
			printf("nhap gia tri mang array[%d][%d] : ",i,j);
			scanf("%d",&array[i][j]);
		}
	}
	
	for (int i=0;i<a;i++){
		for (int j=0;j<b-1;j++){
			for (int k=0;k<b-j-1;k++){
				if (array[i][k]>array[i][k+1]){
					int temp;
					temp=array[i][k];
					array[i][k]=array[i][k+1];
					array[i][k+1]=temp;
				}
			}
		}
	}
	
	for (int i=0;i<a;i++){
		for (int j=0;j<b;j++){
			printf("%d ",array[i][j]);
		}
		printf("\n");
	}
	
	
	
	return 0;
}
