#include<stdio.h>
int factorial(int n){
	if(n==0)
	    return 0;
	return n * factorial(n-1);
}
int main(){
	int n;
	printf("Enter number ");
	scanf("%d", &n);
	int fact = factorial(n);
	printf("Factorial = %d\n", fact);
	return 0;
}
