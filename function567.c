#include<stdio.h>
void show(int *x, int *y){
	*x = 1000;
	*y = 2000;
	printf("x = %d and y = %d\n", *x, *y);
}
int main(){
	int a=10, b=20;
	printf("Before function call : a = %d and b = %d\n", a, b);
	show(&a,&b); //call by address
	printf("After function call : a = %d and b = %d\n", a, b);
	return 0;
}
