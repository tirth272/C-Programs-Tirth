#include <stdio.h>
void A()
{
}
void B()
{
}
int main()
{
    int arr[5], i, j;

    printf("Enter the elements of array 1: ");
    for (i = 0; i < 5; i++)
    {
        printf("Element [%d]: ", i);
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < 5; i++)
    {
        printf("Elements [%d]: %d\n", i, arr[i]);
    }
    // Ascending Order
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (arr[j] > arr[i])
            {
                int tmp = arr[i];
                arr[i] = arr[j];
                arr[j] = tmp;
            }
        }
    }
    printf("The numbers in ascending order is:\n");
    for (i = 0; i < 5; ++i)
    {
        printf("%d\n", arr[i]);
    }

    // Descending Order
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (arr[j] < arr[i])
            {
                int tmp = arr[i];
                arr[i] = arr[j];
                arr[j] = tmp;
            }
        }
    }
    printf("The numbers in Descending order is:\n");
    for (i = 0; i < 5; ++i)
    {
        printf("%d\n", arr[i]);
    }
    return 0;
}
