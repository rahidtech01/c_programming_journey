/*
Write a program to determine wheater a character entered by the user is a lowercast or not
*/
// we will use ASCII value for this excercise
#include <stdio.h>

/*int main()
{
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);
    if(ch <= 97 || ch >= 122){
        printf("The character isn't Lowercase");
    }
    else{
        printf("The character is Lowercase");
    }
    return 0;
}*/

#include <stdio.h>

int main()
{
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);
    if (ch >= 'a' && ch <= 'z')
    {
        printf("The character is lowercase");
    }
    else
    {
        printf("The character isn't a lowercase");
    }
    return 0;
}