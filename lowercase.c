#include<stdio.h>
int main()
{
	char  ch;
	printf("entre a character: ");
	scanf("%c", &ch);
	if(ch>= 'a' && ch>= 'z')
	   printf("lowercase letter\n");
	else
       printf("not lowercase letter\n");
	return 0;
}

