#include <stdio.h>

int main()
{
    int n1, n2;
    printf("Enter the value of A: ");
    scanf("%d", &n1);
    printf("Enter the value of B: ");
    scanf("%d", &n2);

    printf("\nThe value of A: %d\n The value of B: %d\n", n1, n2);

    if (n1 > n2)
    {
        printf("\nA is Greater.");
    }
    else
    {
        printf("\nB is Greater.");
    }

    return 0;
}