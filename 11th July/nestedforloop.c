#include <stdio.h>
int main(){
	int i,j,t;
	
	for(i=2;i<=10;i++)
	{
		printf("\n\n-------- The table of %d --------",i);
		
		for(j=1;j<=10;j++)
		{	
			t=i*j;
			printf("\n%d X %d = %d",i,j,t);
		}
	}
}