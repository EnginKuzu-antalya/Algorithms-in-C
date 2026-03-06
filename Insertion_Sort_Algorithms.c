#include<stdio.h>

void insertion_sort();


void insertion_sort(int arr[5],int size){
	int i,j;
	int temp;
	
	for(i=0;i<size-1;i++){
		
		for(j=i+1;j>0;j--){
			
			if(arr[j]<arr[j-1]){
				temp=arr[j];
				arr[j]=arr[j-1];
				arr[j-1]=temp;
			}
		}
		
		printf("\n%d. iterasyon: ",i+1);
		for(j=0;j<size;j++){
			printf("%d ",arr[j]);
		}
	}
	
	printf("\n\n\n\n\n\n\n******************************************\n");
	for(j=0;j<size;j++){
		printf("%d ",arr[j]);
	}
}

int main(){
	int arr[5]={3,0,2,5,-1};
	int size=sizeof(arr)/sizeof(arr[0]);
	
	insertion_sort(arr,size);
	
	
	return 0;
}
