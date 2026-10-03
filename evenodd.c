#include<stdio.h>
int main()
{
	int i, n, sum1=0, sum2=0;
	printf("entre the number");
	scanf("%d", &n);
	for(i=1; i<=n; i++)
	{
		if(i%2==0)
		sum1=sum1 + i;
		else
		sum2= sum2 + i;
	}
	    printf("sum of even number =%d\n", sum1);
	     printf("sum of odd number =%d\n", sum2);
	     return 0;
	 }
	    
