#include<stdio.h>
int add(int,int);
int substract(int,int);
int multiply(int,int);
int main(){
	int a, b;
	printf("Enter two number : ");
	scanf("%d%d", &a, &b);
	int sum = add(a,b);
	int sub = substract(a,b);
	int mul = multiply(a,b);
	printf("Addition = %d\n", sum);
	printf("Substractioin = %d\n", sub);
	printf("Multiplication = %d\n", mul);
	return 0;
}
int add(int x, int y){
	return x+y;
}
int substract(int x, int y){
	return x-y;
}
int multiply(int x,int y){
	return x*y;
}
