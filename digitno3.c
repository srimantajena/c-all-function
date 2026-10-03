#include<stdio.h>
int main()
{
	char ch;
	printf("entre a charcter");
	scanf("%c", &ch);
	if(ch>='0' && ch<='9') 
	   printf("digit\n");
	else
	   printf(" not a digit\n");
	return 0;
}
