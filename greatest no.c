#include<stdio.h>
int main()
{
	int a,b;
	printf("enter the number");
	scanf("%d%d", &a,&b);
	(a>b)? printf(" %d is greater " ,a): printf(" %d is greater ", b);
	return 0;
}
