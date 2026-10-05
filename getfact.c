#include<stdio.h>

int main(){
	
	getfactorial();
	return 0;
}
void getfactor(){
	int n, i, fact=1;
	printf("Enter number");
	scanf("%d", &n);
	for(i=1; i<=n; i++){
		fact = fact * i;
	}
	printf("Factorial of %d is %d", n, fact);
}
