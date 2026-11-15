/* write a C program to calculate the area of a rectangle 
   a. using hardcoded inputs 
   b. using inputs supplyed by the user */
/*
#include <stdio.h>

int main ()
{
    // a. using hardcoded inputs
    int length = 6;
    int width = 4;
    int area = length * width;
    printf("The area of the rectangle is: %d\n", area);
    return 0;
} */

#include <stdio.h>

int main()
{
    // b. using inputs supplied by the user
    int length, width, area;
    printf("Enter the length of the rectangle: ");
    scanf("%d", &length);
    printf("Enter the width of the rectangle: ");
    scanf("%d", &width);
    area = length * width;
    printf("The area of the rectangle is: %d\n", area);
    return 0;
}
