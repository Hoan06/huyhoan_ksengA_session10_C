#include <stdio.h>

int main(){
	
	int array[]={1,5,6,3,4,7,9};
	int n=sizeof(array)/sizeof(int);
	printf("so khi chua sap xep :\n");
	for (int i=0;i<n;i++){
		printf(" %d ",array[i]);
	}
	for (int i=0;i<n-1;i++){
		for (int j=0;j<n-1-i;j++){
			if (array[j]>array[j+1]){
				int tem=array[j];
				array[j]=array[j+1];
				array[j+1]=tem;
			}
		}		
	}
	printf("\n");
	printf("so khi da sap xep :\n");
	for (int i=0;i<n;i++){
		printf(" %d ",array[i]);
	}
	
	
	return 0;
}
