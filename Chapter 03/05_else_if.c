#include <stdio.h>

int main()
{
    int age = 57;

    if (age>60)
        printf("you can drive and you are senior citizen\n");
    else if (age>45)
        printf("you can drive and you are elder citizen\n");
    else if(age>18)
        printf("you can drive\n");
    else if(age<18)
        printf("you cannot drive\n");
    return 0;
}