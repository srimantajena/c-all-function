#include<stdio.h>
int sum0fDigits(int n){
	if(n==0)
	    return 0;
	return n%10 + sum0fDigits(n/10);
}
int main(){
	int n;
	printf("Enter number ");
	scanf("%d", &n);
	int sum = sum0fDigits(n);
	printf("sum of digits= %d\n", sum);
	return 0;
}
