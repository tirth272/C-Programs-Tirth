#include <stdio.h>

int main()
{
    int size, a[10], i;

    int odd_count = 0, even_count = 0;

    printf("Enter the size: ");
    scanf("%d", &size);

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
    printf("\n Total Number of Even Numbers in this Array = %d ", even_count);
    printf("\n Total Number of Odd Numbers in this Array = %d ", odd_count);

    return 0;
}