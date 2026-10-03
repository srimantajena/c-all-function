#include<stdio.h>
int main()
{
	int n, sum, digit;
	printf("Enter number of terms");
	scanf("%d", &n);
	while(n!=0){
		int digit = n%10;
		sum = sum + digit;
		n = n/10;
	}
	printf("Sum of digits = %d", sum);
	    return 0;
}
