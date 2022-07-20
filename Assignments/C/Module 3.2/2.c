#include <stdio.h>

int main()
{
    int a, b;

    printf("Enter the value of a: ");
    scanf("%d", &a);
    printf("Enter the value of b: ");
    scanf("%d", &b);

    printf("Before swap a: %d\n", a);
    printf("Before swap b: %d\n", b);

    a = a + b;
    b = a - b;
    a = a - b;

    printf("after swap a: %d\n", a);
    printf("after swap b: %d\n", b);

    return 0;
}