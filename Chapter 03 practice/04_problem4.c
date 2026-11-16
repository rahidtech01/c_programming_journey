/*
Write a program to find wheather a year entered by the user is a leap year or not
*/

#include <stdio.h>

int main()
{
    int year;
    printf("Enter Year: ");
    scanf("%d", &year);
    if ((year %4==0 && year %100!=0) || year %400==0)
    {
        printf("Its a Leap year: ");
    }
    else
    {
        printf("Its not a Leap year:");
    }
    return 0;
}