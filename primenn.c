#include<stdio.h>
int main()
{
	int n, i, c=0;
	printf("Enter number");
	scanf("%d", &n);
	for(i=1; i<=n; i++){
		if(n%i == 0)
		    c++;
		    break;
		    
	}
	if(c == 2)
	   printf("%d is prime", n);
	else
	   printf("%d is not prime", n);
	return 0;
}

