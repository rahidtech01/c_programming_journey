#include <stdio.h>

int main()
{
    float a = 9.0;
    int b = 2;
    float c = a / b;
    int d = 6.7;
    printf("the value of a/b is %.1f\n", c);
    printf("the value of d is %d\n", d);
    /*int a = 3.5; [in this case 3.5(float) will be demoted to 3(int)
    because a won't be able to store float].*/
    /*NOTE: int a = 3.0/9 (value of k) and (why)
    3.0/9 = 0.333 but since a is an int, it can't store float value
    so the 0.333 value will demote to 0 */
    return 0;
}