#include <stdio.h>

int main()
{
    int a, b, c;
    printf("Enter the value of A: ");
    scanf("%d", &a);
    printf("Enter the value of B: ");
    scanf("%d", &b);
    printf("Enter the value of C: ");
    scanf("%d", &c);

    printf("\nThe value of A: %d\nThe value of B: %d\nThe value of C: %d\n", a, b, c);

    if (a > b)
    {
        if (a > c)
        {
            printf("A is Greater");
        }
        else
        {
            printf("C is Greater");
        }
    }
    else
    {
        if (b > c)
        {
            printf("B is Greater");
        }
        else
        {
            printf("C is Greater");
        }
    }

    return 0;
}