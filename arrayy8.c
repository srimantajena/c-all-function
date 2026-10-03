#include<stdio.h>
int main(){
	int n;
	printf("Enter array size ");
	scanf("%d", &n);
	int arr[n], i;
	//How we can read the data of an array from user 
	printf("Enter value ");
	for(i=0; i<n; i++){
		scanf("%d", &arr[i]);
	}
	
	//How we can display the elements of an array
	for(i=0; i<n; i++){	
	    printf("%d ", arr[i]);
    }
	return 0;
}
