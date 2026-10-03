#include<stdio.h>
int main()
{
	int num;
	printf("entre number : ");
	scanf("%d", &num);
	if(num>0)	
{
	int cube = num * num * num;
	printf("code of %d is %d", num, cube);
}
return 0;
}
