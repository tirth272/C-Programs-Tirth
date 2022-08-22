// Reverse a number
#include <stdio.h>

int main()
{
    int n, r = 0, reminder;

    printf("Enter an integer: ");
    scanf("%d", &n);

    while (n != 0)
    {
        reminder = n % 10;
        r = r * 10 + reminder;
        n /= 10;
    }
    printf("Reversed number: %d", r);
    return 0;
}