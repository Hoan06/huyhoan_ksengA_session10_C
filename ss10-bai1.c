#include <stdio.h>

int main(){
	int array[5]={1,2,3,4,5};
	int a,flag=0;
	printf("moi ban nhap phan tu bat ki ");
	scanf("%d",&a);
	for (int i=0;i<5;i++){
		if (a==array[i]){
			printf("phan tu co ton tai trong mang o vi tri %d \n",i+1);
			flag=1;
		} 
	}
	if (flag==0){
		printf("phan tu khong ton tai trong mang ");
	}
	
	return 0;
}
