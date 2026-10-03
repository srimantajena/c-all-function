#include<stdio.h>
int main(){
	int row ,col;
	printf("Enter 2d Array row and column size ");
	scanf("%d%d", &row,&col);
	int a[row][col];
	int i, j;
	printf("ENTER ARRAY ELEMENTS ARE  : \n");
	for(i=0; i<row; i++){
		for(j=0; j<col; j++){
			scanf("%d", &a[i][j]);
		}
	}
	int max = a[0][0];
	for(i=0; i<row; i++){
		for(j=0; j<col; j++){
			if(a[i][j] > max )
			{
				max = a[i][j];
			}
		}
	}
	printf("largest elements is%d\n", max);
	return 0;
}
