#include<stdio.h>
int main(){
	 char str[100];
    printf("Enter a string: ");
    gets(str);
    strlwr(str);
    int count = 0, i;
    for(i=0; i<strlen(str); i++){
    	if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'u'){
    		count++;
		}
	}
	printf("Total number of vowels are %d ", count);
	return 0;
}
