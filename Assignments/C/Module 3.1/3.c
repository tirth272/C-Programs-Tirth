#include <stdio.h>

int main()
{
    const float pi = 3.14;
    int r = 2, l = 20, b = 30, a = 5;

    printf("The area of circle is %f\n", pi * r * r);
    printf("The area of rectangle is %d\n", l * b);
    printf("The area of square is %d\n", a * a);
    return 0;
}