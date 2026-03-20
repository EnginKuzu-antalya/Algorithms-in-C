#include<stdio.h>


void selection_sort();


void selection_sort(int arr[6],int size){
	int i,j;
	int key;
	int temp;
		
	
	for(i=0;i<size-1;i++){

		key=i;
		
		for(j=(i+1); j<size ;j++){
			if(arr[key]>arr[j]){
				key=j;
			}
		}
		
		temp=arr[i];
		arr[i]=arr[key];
		arr[key]=temp;
		
		

		printf("\n%d. iteration: ",i+1);
		
		for(j=0;j<size;j++){
			printf("%d ",arr[j]);
		}
	}
	
	
	printf("\n\n\n\n\n\n**************************\n");
			
	for(i=0;i<size;i++){
		printf("%d ",arr[i]);
	}
}

int main(){
	
	int arr[6]={18,44,7,21,-2,19};
	
	int size=sizeof(arr)/sizeof(arr[0]);
	
	
	selection_sort(arr,size);
	
	return 0;
}

