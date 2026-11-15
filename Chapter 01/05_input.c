/* C me input lene k liye hum scanf() function ka use karte hain.
 Ye function user se input lene ke liye use hota hai.8
 Iska syntax kuch is tarah hota hai:*/
// scanf("format_specifier", &variable);

#include <stdio.h>

int main ()
{       
    int a;
    printf("Enter an number: ");
    scanf("%d", &a); // user se integer input lena
    printf("The value of a is: %d\n", a); // input value print
  
}