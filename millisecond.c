#include<stdio.h>
int main()
{
	int millisecond,second,hours,minutes;
	printf("entre the value of millisecond");
	scanf("%d", &millisecond);
	hours = millisecond / 3600000 ;
	minutes = millisecond /600000 ;
	second = millisecond / 1000 ;
	millisecond = millisecond %  3600000 ;
	 printf("Hours   = %d\n", hours);
    printf("Minutes = %d\n", minutes);
    printf("second = %d\n" , second);
    return 0;
}
