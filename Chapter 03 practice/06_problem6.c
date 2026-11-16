// Write a program to greatest of 4 numbers entered by the user

#include <stdio.h>

int main()
{
    int a, b, c, d;
    printf("Enter the number: ");
    scanf("%d", &a);
    printf("Enter the number: ");
    scanf("%d", &b);
    printf("Enter the number: ");
    scanf("%d", &c);
    printf("Enter the number: ");
    scanf("%d", &d);

    if (a >= b && a >= c && a >= d)
    {
        printf("%d is the greatest number", a);
    }
    else if (b >= a && b >= c && b >= d)
    {
        printf("%d is the greatest number", b);
    }
    else if (c >= b && c >= a && c >= d)
    {
        printf("%d is the greatest number", c);
    }
    else
    {
        printf("%d is the greatest number", d);
    }
    return 0;
}