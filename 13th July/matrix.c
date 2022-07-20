#include <stdio.h>
void main(){
	int i;
	int arr1[5], arr2[5];
	
	printf("::::::Enter the values of Array 1::::::\n");
	for(i=1;i<6;i++)
	{
		printf("\nEnter the value for %d element: ",i);
		scanf("\n%d",&arr1[i]);
	}
	
	
	printf("\n::::::Enter the values of Array 2::::::\n");
	for(i=1;i<6;i++)
	{
		printf("\nEnter the value for %d element: ",i);
		scanf("\n%d",&arr2[i]);
	}
	
	
	printf("\n::::::Addition of both Arrays::::::\n");
	for(i=1;i<6;i++)
	{
		printf("\nAddition of %d Elements is: %d\n",i,(arr1[i]+arr2[i]));
	}
	
	
	printf("\n::::::Subtraction of both Arrays::::::\n");
	for(i=1;i<6;i++)
	{
		printf("\nAddition of %d Elements is: %d\n",i,(arr1[i]-arr2[i]));
	}
	printf("\n::::::Multiolication of both Arrays::::::\n");
	for(i=1;i<6;i++)
	{
		printf("\nAddition of %d Elements is: %d\n",i,(arr1[i]*arr2[i]));
	}
	printf("\n::::::Division of both Arrays::::::\n");
	for(i=1;i<6;i++)
	{
		printf("\nAddition of %d Elements is: %d\n",i,(arr1[i]/arr2[i]));
	}
}