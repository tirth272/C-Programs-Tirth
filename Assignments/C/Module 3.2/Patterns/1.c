#include <stdio.h>

int main()
{
    int i, j, n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    for (i = 0; i <= n; i++)
    {
        for (j = 0; i <= n; j++)
        {
            if (j % 2 == 1)
            {
                printf("1");
            }
            else
            {
                printf("0");
            }
        }
        printf("/n");
    }

    return 0;
}