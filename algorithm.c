#include<stdio.h>
int main()
{
	char ch;
	printf("enter arithmetic operator : ");
	scanf("%c", &ch);
	int x, y;
	printf("enter two numbers ");
	scanf("%d%d", &x, &y);
	switch(ch){
		case '+':
			printf("Addition = %d", x+y);
			break;
	    case '-':
	    	printf("substraction = %d", x-y);
	    	break;
	    case '/':
	    	printf("division = %d", x/y );
	    	break;
	    case '*':
	    	printf("multiplication = %d", x*y);
	    	break;
	    case '%':
	    	printf("percentage = %d", x%y);
	    	break;
	}
	    
	    return 0;
	}
