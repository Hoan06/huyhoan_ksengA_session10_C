#include <stdio.h>

int main(){
	
	int array[]={1,7,9,2,4,3,8};
	int n=sizeof(array)/sizeof(int);
	printf("so khi chua sap xep :\n");
	for (int i=0;i<n;i++){
		printf(" %d ",array[i]);
	}
	for (int i=1;i<n;i++){
		int key=array[i];
		int j=i-1;
		while (j>=0 && array[j]>key){
			array[j+1]=array[j];
			j=j-1;
		}
		array[j+1]=key;
	}
	printf("\n");
	printf("so khi da sap xep :\n");
	for (int i=0;i<n;i++){
		printf(" %d ",array[i]);
	}
	
	
	return 0;
}
