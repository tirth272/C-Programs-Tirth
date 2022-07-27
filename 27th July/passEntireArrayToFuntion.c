#include <stdio.h>

void display(int *p)
{
    int i;
    for (i = 0; i < 5; i++)
    {
        printf("%d\t", *(p + i));
    }
}

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    display(arr);
    return 0;
}