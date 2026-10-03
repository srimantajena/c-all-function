#include<stdio.h>
int main(){
    int n;
    printf("Enter array size ");
    scanf("%d", &n);
    int arr[n], sum=0, i;
    printf("Enter Array Elements");
    for(i=0; i<n; i++){
    	scanf("%d", &arr[i]);
    	sum += arr[i];
	}
	printf("Array elements sum = %d", sum);
	return 0;
}
