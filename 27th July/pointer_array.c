#include <stdio.h>

void show(int *a)
{
    printf("%d\t", *a);
}

int main()
{
    int i, size, arr;
    printf("Enter the array size: ");
    scanf("%d", &size);

    printf("Enter the elements: ");
    for (i = 0; i < size; i++)
    {
        scanf("%d", &arr);
    }
    for (i = 0; i < size; i++)
    {
        printf("%d\t", (arr));
    }
    // for (i = 0; i < size; i++)
    // {
    //     show(arr + i);
    // }

    return 0;
}