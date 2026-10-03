#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter the number");
	scanf("%d%d%d", &a,&b,&c);
	(a > b && a > c)? printf(" %d is greater " ,a): printf(" %d is greater ", b): printf(" %d is greater ", c);
	return 0;
}

