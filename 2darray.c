#include<stdio.h>                                                     
int main(){      
    int row,col;
	printf("Enter size of row and col:");
	scanf("%d%d",&row,&col);                           
	int marks[row][col];   
	int j,i;
	printf("Enter Array Elements are:");
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			scanf("%d ",&marks[i][j]);
		}	
	}            
	printf("Array Elements are:\n");
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			printf("%d ",marks[i][j]);
		}
		printf("\n");
	}                                                                                                                                                                                                      
	return 0;
}

