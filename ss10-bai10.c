#include <stdio.h>

int main(){
	int a[3]={0};
	int i,j,temp;
	int array[3][3]={{1,4,7},{6,5,2},{8,9,3}};
	int size=sizeof(array)/sizeof(int);
	for (int i=0;i<3;i++){
		a[i]=array[i][2-i];
	}
	for ( i=0;i<3;i++){
		for ( j=0;j<3-i-1;j++){
			if (a[j]<a[j+1]){				
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	for ( i=0;i<3;i++){
		array[i][2-i]=a[i];
	}
	for (i=0;i<3;i++){
		for(j=0;j<3;j++){
		    printf("%d ",array[i][j]);
		}
		printf("\n");
	}
	
	
	return 0;
}
