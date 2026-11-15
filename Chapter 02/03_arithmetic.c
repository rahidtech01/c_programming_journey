#include <stdio.h>

int main()
{
    int a = 3;
    int b = 5;
    int c = a + b;
    printf("the sum of a and b is %d\n", c);
    //the modulus operator(%) is used to get the reminder
    printf("the remainder when b is devided by a is %d\n", b%a);

    //this doesn't work for exponentiation in C. int d = a^b.
    return 0;
}