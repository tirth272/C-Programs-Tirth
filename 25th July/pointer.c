#include <stdio.h>

int main()
{
    int a, *b, c, *d;
    printf("The address of A through variable: %u", &a);
    printf("\nThe address of c through variable: %u", &c);

    b = &a;
    d = &c;

    printf("\nThe Address of a using pointer variable: %u", b);
    printf("\nThe Address of c using pointer variable: %u", d);
    return 0;
}