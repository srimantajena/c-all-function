#include<stdio.h>
int main()
{
	int n, cnt=0;
	printf("Enter number of terms");
	scanf("%d", &n);
	while(n!=0){
		cnt++;
	    n = n/10;
	    
}
    printf("number of digit are %d", cnt);
    return 0;
}
