#include <stdio.h>

int main()
{
    int num, large = 0, rem = 0;

    /* get the input from the user */
    printf("Enter your input value:");
    scanf("%d", &num);

    while (num > 0)
    {
        rem = num % 10;

        if (rem > large)
        {
            large = rem;
        }

        num = num / 10;
    }

    printf("Largest digit of the number is %d\n", large);
    return 0;
}
