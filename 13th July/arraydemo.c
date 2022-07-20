#include <stdio.h>
void main(){
	int i;
	int arr[5];
	
	printf("\n::::::Value taken from user::::::\n");
	for(i=1;i<6;i++)
	{
		printf("Enter the value for %d element: ",i);
		scanf("\n%d",&arr[i]);
	}
	printf("\n::::::Display of the array::::::\n");
	for(i=1;i<6;i++)
	{
		printf("Element %d is: %d\n",i,arr[i]);
	}
}