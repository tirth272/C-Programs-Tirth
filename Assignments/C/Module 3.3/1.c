#include <stdio.h>
max(int[], int);

int main()
{
    int arr[5], n = 5, m;
    for (int i = 0; i < n; i++)
    {
        printf("Enter the elements of array: ");
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("Elements[%d] : %d\n", i, arr[i]);
    }
    m = max(arr, n);
    printf("\nMaximum element is :  %d", m);

    return 0;
}
int max(int x[], int k)
{
    int t, i;
    t = x[0];
    for (i = 1; i < k; i++)
    {
        if (x[i] > t)
            t = x[i];
    }
    return (t);
}