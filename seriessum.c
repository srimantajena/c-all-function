#include<stdio.h>
int main(){
	float n,x, sum = 1;
	int i,j;
	printf("Enter the value of X : ");
	scanf("%f", &x);
	printf("Enter the value of n");
	scanf("%f", &n);
	for(i=1; i<n; i++){
		float p = pow(x, 2*i);
		float fact=1;
		for(j=1; j<=2*i; j++){
			fact = fact *j;
		}
		float term = p/fact;
		if(i%2==1)
		    sum -= term;
		else
		    sum += term;
	}
	printf("Sum of  series = %f", sum);
	return 0;
}
