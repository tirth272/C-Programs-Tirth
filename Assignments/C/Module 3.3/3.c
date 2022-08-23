#include <stdio.h>
void reverseSentance();
int main()
{

    printf("Enter a sentence: ");
    reverseSentance();

    return 0;
}
void reverseSentance()
{
    char c;
    scanf("%c", &c);
    if (c != '\n')
    {
        reverseSentance();
        printf("%c", c);
    }
}