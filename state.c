#include<stdio.h>
int main(){
	
	int totaldays,year,month;
	printf("entre age in total days: ");
	scanf("%d, &totaldays");
	year = totaldays / 365;
	month = totaldays / 365;
	totaldays = totaldays % 365;
	printf("age = %d, year = %d, days = %d, month = %d");
	
	return 0;
}
