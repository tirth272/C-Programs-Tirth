#include <stdio.h>
void main()
{
	int i,j,mtr1[3][3],mtr2[3][3];
	
	printf("\n\n<<<<<<<<<<<<<<<<<<<Matrix 1>>>>>>>>>>>>>>>>>>>>>>\n\n");
	printf("Accept the values for 1st matrix: \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("Enter Element[%d][%d]: ",i,j);
			scanf("%d",&mtr1[i][j]);
		}
	}
	
	printf("Display the values of 1st matrix: \n");
	
	for(i=0;i<3;i++)
	{
		
		for(j=0;j<3;j++)
		{         
			printf("%d\t", mtr1[i][j]);	
		}
		printf("\n");
	}
	
	printf("\n\n<<<<<<<<<<<<<<<<<<<Matrix 2>>>>>>>>>>>>>>>>>>>>>>\n\n");
	printf("Accept the values for 2nd matrix: \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("Enter Element[%d][%d]: ",i,j);
			scanf("%d",&mtr2[i][j]);
		}
	}
	
	printf("Display the values of 2nd matrix: \n");
	
	for(i=0;i<3;i++)
	{
		
		for(j=0;j<3;j++)
		{         
			printf("%d\t", mtr2[i][j]);	
		}
		printf("\n");
	}
	
	printf("\n\n<<<<<<<<<<<<<<<<<<<Addition>>>>>>>>>>>>>>>>>>>>>>\n\n");
	
	for(i=0;i<3;i++)
	{
		
		for(j=0;j<3;j++)
		{         
			printf("%d\t", mtr1[i][j]+mtr2[i][j]);	
		}
		printf("\n");
	}
}