#include <stdio.h>

int main(){
	
	int array[]={1,2,7,3,9,5,7,4};
	int size = sizeof(array)/sizeof(int);
	int answer;
	int flag=-1;
	
	printf("moi ban nhap so muon tim ");
	scanf("%d",&answer);
	
	for (int i=0;i<size;i++){
		if (array[i]==answer){
			printf("so %d o vi tri %d \n",answer,i);
			flag++;
		}
	}
	if (flag==-1){
		printf("phan tu khong co trong mang ");
	}
	
	
	return 0;
}
