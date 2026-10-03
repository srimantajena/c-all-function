#include<stdio.h>
int main(){
	int x = 4.5;
	int arr[5], i;
	arr[0] = 11;
	arr[1] = 22;
	arr[3] = 33;
	arr[4] = 44;
	arr[5] = 55;
	//How we can display the elements of an array
	for(i=0; i<5; i++){	
	    printf("%d ", arr[i]);
    }
	return 0;
}
