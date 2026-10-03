#include<stdio.h>
int main()
{
	char ch;
		
	printf("entre a character: ");
	scanf("%c", &ch);
	if(ch>= 'A' && ch>= 'Z')
	   printf("uppercase letter\n");
	else
       printf("not uppercase letter\n");
	return 0;
}
