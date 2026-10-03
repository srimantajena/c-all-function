#include<string.h>
#include<string.h>
int main(){
	char str[30], temp[30];
	printf("Enter string : ");
	gets(str);
	strcpy(temp, str);
	strrev(temp);
	if(strcmp(str, temp) == 0)
	  printf("Paliondrome string");
	else
	  printf("Nomtb paliondrome");
	return 0;
}
