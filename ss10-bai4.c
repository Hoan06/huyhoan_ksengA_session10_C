#include <stdio.h>

int main(){
	
	int array[]={10,15,13,20,12,11};
	int n=sizeof(array)/sizeof(int);
	printf("so khi chua sap xep :\n");
	for (int i=0;i<n;i++){
		printf(" %d ",array[i]);
	}
	for (int i=0;i<n-1;i++){
		int key=i;
		for (int j=i+1;j<n;j++){
			if (array[j]<array[key]){
				key=j;
			}
		}
		int tem=array[key];
		array[key]=array[i];
		array[i]=tem;
		
	}
	printf("\n");
	printf("so khi da sap xep :\n");
	for (int i=0;i<n;i++){
		printf(" %d ",array[i]);
	}
	
	
	return 0;
}
