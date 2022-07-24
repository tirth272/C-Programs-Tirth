#include <stdio.h>

int main()
{
    int size, a[10], i;

    int odd_count = 0, even_count = 0;

    printf("Enter the size: ");
    scanf("%d", &size);

    printf("Enter the elements: ");

    for (i = 0; i < size; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < size; i++)
    {
        if (a[i] % 2 == 0)
        {
            even_count++;
        }
        else
        {
            odd_count++;
        }
    }
    printf("\n Total Number of Even Numbers in this Array = %d\n ", even_count);
    printf("\n Total Number of Odd Numbers in this Array = %d\n ", odd_count);

    for (i = 0; i < a; i++)
    {
        if (a[i] % 2 == 0)
        {
            even_count = even_count + i;
        }
        else
        {
            odd_count = odd_count + i;
        }
        printf("sum of even numbers: %d\n", even_count);
        printf("sum of odd numbers: %d\n", odd_count);
    }

    return 0;
}