#include<stdio.h>
int findLargest(int arr[], int size){
    if(size == 1)
        return arr[0];
    int max = findLargest(arr, size-1);
    if(arr[size-1]>max)
        return arr[size-1];
    else
        return max;

}
int main(){
    int arr[10], i;
    printf("Enter array elements : ");
    for(i=0; i<10; i++){
    	scanf("%d", &arr[i]);
	}
	int max = findLargest(arr, 10);
	printf("Largest element is %d", max);
	return 0;
}
