#include<stdio.h>
int main(){
	int arr[5], i;
	//How we can read the data of an array from user 
	printf("Enter value ");
	for(i=0; i<5; i++){
		scanf("%d", &arr[i]);
	}
	
	//How we can display the elements of an array
	for(i=0; i<5; i++){	
	    printf("%d ", arr[i]);
    }
	return 0;
}
