#include <stdio.h>

void add(int a, int b)
{
    printf("Addition: %d\n", (a + b));
}
void sub(int a, int b)
{
    printf("Subtraction: %d\n", (a - b));
}
void mul(int a, int b)
{
    printf("Multiplication: %d\n", (a * b));
}
void div(int a, int b)
{
    printf("Division: %d\n", (a / b));
}

int main()
{
    int a, b, c;

    printf("Enter value of a: ");
    scanf("%d", &a);
    printf("Enter value of b: ");
    scanf("%d", &b);

    printf("Enter 1 for Addition\nEnter 2 for Subtraction\nEnter 3 for Multiplication\nEnter 4 for Division\n\n\n");
    printf("Enter your choice: ");
    scanf("%d", &c);
    switch (c)
    {
    case 1:
        add(a, b);
        break;
    case 2:
        sub(a, b);
        break;
    case 3:
        mul(a, b);
        break;
    case 4:
        div(a, b);
        break;

    default:
        printf("Enter a valid choice please!!");
        break;
    }
    return 0;
}