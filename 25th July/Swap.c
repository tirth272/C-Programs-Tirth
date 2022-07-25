#include <stdio.h>

void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int a = 10, b = 20;
    printf("Before swap:\nA=%d and b=%d\n", a, b);
    swap(&a, &b);
    printf("After swap:\nA=%d and b=%d\n", a, b);
    return 0;
}