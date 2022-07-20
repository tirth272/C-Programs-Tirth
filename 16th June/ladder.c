#include <stdio.h>

int main()
{
    int rno;
    char name[10];
    int s1, s2, s3, total;
    float per;
    printf("Enter your Roll No: ");
    scanf("%d", &rno);
    printf("Enter your Name: ");
    scanf("%s", &name);
    printf("Enter Physics Marks ");
    scanf("%d", &s1);
    printf("Enter Chemistry Marks: ");
    scanf("%d", &s2);
    printf("Enter Maths Marks: ");
    scanf("%d", &s3);

    total = s1 + s2 + s3;

    printf("PCM Marks: %d\n", total);

    per = total / 3;

    printf("Your percentage is: %.2f\n", per);

    if (per > 75)
    {
        printf("Distinction");
    }
    else if (per > 60)
    {
        printf("First class");
    }
    else if (per > 50)
    {
        printf("Second class");
    }
    else if (per > 40)
    {
        printf("Pass");
    }
    else
    {
        printf("Fail");
    }

    return 0;
}