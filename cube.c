#include<stdio.h>
int main()
{
int i,n,cub;
printf("enter the number to find, cube");
scanf("%d",&n);
for(i = 1; i <= n; i++)
{
    cub=i*i*i;
	printf("cube of %d = %d\n",i,cub);
	
	
}
    return 0;

}
