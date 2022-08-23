#include <stdio.h>
int factorial(int);
int factorial(int x)
{
    if (x == 0)
    {
        return (1);
    }
    return (x * factorial(x - 1));
}
int main()
{
    int n, fact;
    printf("Enter a number : ");
    scanf("%d", &n);

    fact = factorial(n);

    printf("Factorial of %d is : %d", n, fact);
    return 0;
}