#include<stdio.h>
int main(){
	int ms,sec,hrs,min ;
	printf("enter time in milliseconds ");
	scanf("%d", &ms);
	hrs = ms/3600000;
    ms = ms%3600000;
	min = ms/60000;
	ms = ms%60000;
	sec = ms/1000;
	printf("Hours = %d, minutes = %d, second = %d, hrs,sec,min");
	return 0;
}
