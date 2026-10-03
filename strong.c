#include<stdio.h>
int main()
{
	int n, sum=0;
	printf("enter number");
	scanf("%d", &n);
	int temp = n;
	while(temp != 0){
		int rem = temp%10;
		int fact=1, i;
		for(i=1; i<=rem; i++){
			fact = fact *i;
			
		}
		sum = sum + fact;
		temp = temp/10;
	}
	if(n==sum)
	  printf("Number is strong");
	else
	  printf("Number is not strong");
	  
	  return 0;

}
