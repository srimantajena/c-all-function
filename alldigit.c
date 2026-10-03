//wap to print all digits of given number
#include<stdio.h>
int main()
{
	int n;
	printf("Enter number of terms");
	scanf("%d", &n);
	while(n!=0){
	    int digit =  n%10;
	    printf("%d", digit);
	    n = n/10;
	    
}
    return 0;
}
