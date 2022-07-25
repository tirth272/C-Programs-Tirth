#include <stdio.h>

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int *ptr;
    ptr = arr;
    printf("Printing the address of array: \n");
    for (int i = 0; i < 5; i++)
    {
        printf("\nElement [%d] : %u", i, ptr + i);
    }

    printf("\nPrinting the Values of array: \n");
    for (int i = 0; i < 5; i++)
    {
        printf("\nElement [%d] : %d", i, *(ptr + i));
    }

    return 0;
}