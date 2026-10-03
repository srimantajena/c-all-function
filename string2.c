#include<stdio.h>
int main(){
	char name[30];
	char collegename[60];
	char rollnumber[100];
	int pincode;
	printf("enter name :");
	gets(name);
	printf("Enter college name :");
	gets(collegename);
	printf("Enter college rollnumber :");
	gets(rollnumber);
	printf("Enter college pincode :");
	scanf("%d", &pincode);
	printf("name = %s\n", name);
	printf("roll number = %s\n", rollnumber);
	printf("college name = %s\n", collegename);
	printf("pincode = %d", pincode);
	return 0;
}
