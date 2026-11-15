/*write a program to convert temperature from Celsius to Fahrenheit*/

#include<stdio.h>

int main()
{ 
    float c=32,f;
    f = ((9.0/5.0)*c)+32;
  
    printf("the temperature in fahrenheit is %.2f", f );

    return 0;
}