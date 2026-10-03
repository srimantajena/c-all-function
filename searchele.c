#include<stdio.h>
int main(){
    int n;
    printf("Enter array size ");
    scanf("%d", &n);
    int arr[n], val, i;
    printf("Enter Array Elements");
    for(i=0; i<n; i++){
    	scanf("%d", &arr[i]);
	}
	printf("Enter searching elements ");
	scanf("%d", &val);
	int flag = 0;
	for(i=0; i<n; i++){
		if(arr[i]==val){
			flag = 1;
			break;
		}
		}
		if(flag == 1)
		    printf("Found!!!");
		else
			printf("Not found!!!");
		
	return 0;
}
