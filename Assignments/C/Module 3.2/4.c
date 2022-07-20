#include <stdio.h>

int main()
{

    int i;
    char c;

    printf("Enter a number to get the day:  ");
    scanf("%d", &i);

    switch (i)
    {
    case 1:
        printf("Sunday");
        break;

    case 2:
        printf("Monday");
        break;

    case 3:
        printf("Tuesday");
        break;

    case 4:
        printf("Wednesday");
        break;

    case 5:
        printf("Thursday");
        break;

    case 6:
        printf("Friday");
        break;

    case 7:
        printf("Saturday");
        break;

    default:
        printf("Invalid choice!!!");
        break;
    }

    printf("\n");

    printf("Enter any character: ");
    scanf("%s", &c);

    switch (c)
    {
    case 'a':
        printf("It is a vowel");
        break;
    case 'e':
        printf("It is a vowel");
        break;
    case 'i':
        printf("It is a vowel");
        break;
    case 'o':
        printf("It is a vowel");
        break;
    case 'u':
        printf("It is a vowel");
        break;
    case 'A':
        printf("It is a vowel");
        break;
    case 'E':
        printf("It is a vowel");
        break;
    case 'I':
        printf("It is a vowel");
        break;
    case 'O':
        printf("It is a vowel");
        break;
    case 'U':
        printf("It is a vowel");
        break;

    default:
        printf("It is a Consonent");
        break;
    }

    return 0;
}