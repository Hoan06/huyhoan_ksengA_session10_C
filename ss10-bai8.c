#include <stdio.h>

int main (){
	
	int a,b;
	printf("moi ban nhap so dong ");
	scanf("%d",&a);
	printf("moi ban nhap so cot ");
	scanf("%d",&b);
	
	int array[a][b];
	int index;
	int temp[a * b];
	index=0;
	for (int i=0;i<a;i++){
		for (int j=0;j<b;j++){
			printf("nhap gia tri mang array[%d][%d] : ",i,j);
			scanf("%d",&array[i][j]);
			temp[index++]=array[i][j];
		}
	}
	

	for (int i=0;i<index-1;i++){
		for (int j=0;j<index-i-1;j++){
			if (temp[j]>temp[j+1]){
				int swap;
				swap=temp[j];
				temp[j]=temp[j+1];
				temp[j+1]=swap;
			}
		}
	}
	index=0;
	for (int i=0;i<a;i++){
		for (int j=0;j<b;j++){
			array[i][j]=temp[index++];
		}
	}
	
	for (int i=0;i<b;i++){
		for (int j=0;j<a;j++){
			printf("%d ",array[j][i]);
		}
		printf("\n");
	}
	
	
	
	return 0;
}
