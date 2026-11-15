/* write a program to calculate simple interest for a set of value representing principle,
no of years, interest*/

#include <stdio.h>

int main()
{
    int p = 100;
    float r = 7.5;
    int t = 5;

    printf("the value of simple interest is %.2f", (p * r * t) / 100);
    return 0;
}