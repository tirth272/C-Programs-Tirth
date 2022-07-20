#include <stdio.h>

int main()
{
    int n1, n2;
    // printf("Enter the value of n1: ");
    // scanf("%d", &n1);

    // printf("Enter the value of n2: ");
    // scanf("%d", &n2);
    printf("Enter the value of n1 and n2: ");
    scanf("%d%d", &n1, &n2);
    if (n2 > 0)
    {
        printf("Addition: %d\n", n1 + n2);
        printf("Subtraction: %d\n", n1 - n2);
        printf("Multiplication: %d\n", n1 * n2);
        printf("Division: %.2f\n ", n1 / (float)n2); // typecasting for division //precision control
        printf("Modulo: %d\n", n1 % n2);
    }
    else
    {
        printf("Not valid!!!!!!!!!!!!!!!!!!!!!");
    }

    return 0;
}