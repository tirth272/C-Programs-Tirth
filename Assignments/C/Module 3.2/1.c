#include <stdio.h>

int main()
{
    printf("\n\n\n\t\t\t<-----Calculator----->\t\t\t\n\n\n");
    int a, b;
    printf("Enter the value of a: ");
    scanf("%d", &a);
    printf("Enter the value of b: ");
    scanf("%d", &b);

    printf("Enter 1 for Addition.\nEnter 2 for Subtraction.\nEnter 3 for Multiplication.\nEnter 4 for Division.\nEnter 5 for Modulo.\n\n");
    int s;
    printf("Enter your choice: ");
    scanf("%d", &s);
    switch (s)
    {
    case 1:
        printf("Addition: %d\n", a + b);
        break;
    case 2:
        printf("Subtraction: %d\n", a - b);
        break;
    case 3:
        printf("Multiplication: %d\n", a * b);
        break;
    case 4:
        printf("Division: %d\n", a / (float)b);
        break;
    case 5:
        printf("Modulo: %d\n", a % b);
        break;
    default:
        printf("Invalid choice!!");
        break;
    }
    return 0;
}