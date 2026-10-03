#include<stdio.h>
#include<stdio.h>
#include<stdio.h>
int main(){
	char str[30];
	printf("Enter string : ");
	gets(str);
	int i;
	for(i=0; i<strlen(str); i++){
		if(isupper(str[i])){
			str[i] = tolower(str[i]);
		}
		else{
			str[i] = toupper(str[i]);
		}
	}
	printf("After toggle string is %s", str);
	return 0;
}
