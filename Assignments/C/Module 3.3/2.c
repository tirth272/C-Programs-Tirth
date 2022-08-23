#include <stdio.h>

int main()
{
    int a, b;
    printf("Enter the value of A: ");
    scanf("%d", &a);
    printf("Enter the value of B : ");
    scanf("%d", &b);

    int c;
    switch (c)
    {
    case 1:
        printf("Addition is: %d", (a + b));
        break;
    case 2:
        printf("Subtraction is: %d", (a - b));
        break;
    case 3:
        printf("Multiplication is: %d", (a * b));
        break;
    case 4:
        printf("Division is: %f", (a / (float)b));
        break;
    default:
        printf("Enter avalid choice!!");
        break;
    }
    return 0;
}