#include <stdio.h>

int main(){
	int a;
	int array[5]={1,5,4,2,3};
	int flag=-1;
	for (int i=0;i<5;i++){
		for (int j=0;j<5-i-1;j++){
			if (array[j]>array[j+1]){
				int temp;
				temp=array[j];
				array[j]=array[j+1];
				array[j+1]=temp;
			}
		}
	}
	printf("moi ban nhap so can tim kiem ");
	scanf("%d",&a);
	int i;
	for ( i=0;i<5;i++){
		if (a==array[i]){
			flag=i;
			break;
		}
	}
	if (flag!=-1){
		printf("so %d o vi tri %d ",a,i);
	} else {
		printf("khong co trong mang ");
	}
	
	
	
	return 0;
}
