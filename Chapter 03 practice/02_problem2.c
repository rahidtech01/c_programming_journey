 /*Write a program to determine whether a student has passed or failed. To pass a student requires
 a total of 40% and 33% in each subjects. Solve using input from user*/

#include <stdio.h>

int main()
{
    int marks1;
    int marks2;
    int marks3;
    printf("Enter the marks1: ");
        scanf("%d", &marks1);
    printf("Enter the marks2: ");
        scanf("%d", &marks2);
    printf("Enter the marks3: ");
        scanf("%d", &marks3);
    printf("The marks are %d\n %d\n and %d\n", marks1, marks2, marks3);
    if (marks1 < 33 || marks2 < 33 || marks3 < 33)
        printf("You have failed in one or more subjects\n");
    else if ((marks1 + marks2 + marks3) / 3 < 40)
    {
        printf("You are failed in overall percentage ");
    }
    else
        printf("you are passed!! ");
    return 0;
}

  /*  #include <stdio.h>

int main() 
{
    int marks1, marks2, marks3;
    float total_percentage;

    // Take input for three subjects
    printf("Enter the marks for Subject 1: ");
    scanf("%d", &marks1);
    
    printf("Enter the marks for Subject 2: ");
    scanf("%d", &marks2);
    
    printf("Enter the marks for Subject 3: ");
    scanf("%d", &marks3);

    // Display entered marks
    printf("\nThe marks entered are:\nSubject 1: %d\nSubject 2: %d\nSubject 3: %d\n\n", marks1, marks2, marks3);

    // Calculate overall percentage (assuming each subject is out of 100)
    total_percentage = (marks1 + marks2 + marks3) / 3.0;

    // Check pass/fail conditions
    if (marks1 < 33 || marks2 < 33 || marks3 < 33) 
    {
        printf("Result: FAILED (Scored less than 33%% in one or more subjects).\n");
    } 
    else if (total_percentage < 40.0) 
    {
        printf("Result: FAILED (Overall percentage is %.2f%%, which is less than 40%%).\n", total_percentage);
    } 
    else 
    {
        printf("Result: PASSED! (Overall percentage: %.2f%%).\n", total_percentage);
    }

    return 0;
}
*/