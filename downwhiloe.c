//wap to perform the sum of input numbers untill the user enter zero.
#include<stdio.h>
int main(){
	int n, sum=0;
	do{
		printf("Enter number ");
	    scanf("%d", &n);
		sum += n;
	}while(n != 0);
	printf("Sum = %d", sum);
	return 0;
}
