#include <stdio.h>

int main()
{
    int n1 = 15, n2 = 30;
    printf("Addition: %d\n", n1 + n2);
    printf("Subtraction: %d\n", n1 - n2);
    printf("Multiplication: %d\n", n1 * n2);
    printf("Division: %.2f\n ", n1 / (float)n2); // typecasting for division //precision control
    printf("Modulo: %d\n", n1 % n2);
    return 0;
}