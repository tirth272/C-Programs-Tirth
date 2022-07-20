#include <stdio.h>
void main(){
	int i,j,mtr[i][j];
	
	printf("Accept the values for 2D matrix: \n");
	for(i=1;i<4;i++)
	{
		for(j=1;j<4;j++)
		{
			printf("Enter the %d row's %d Element: ",i,j);
			scanf("%d",&mtr[i][j]);
		}
	}
	
	printf("Display the values of 2D matrix: \n");
	
	for(i=1;i<4;i++)
	{
		
		for(j=1;j<4;j++)
		{         
			printf("%d row's %d Element is: %d\n",i,j, mtr[i][j]);	
		}
		printf("\n");
	}
}