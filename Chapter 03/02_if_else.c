#include <stdio.h>

int main()
{
    int age;

    printf("Enter your age: ");
    scanf("%d", &age);

    if (age >= 18)
    {
        printf("You are eligible to vote.\n");
    }
    else
    {
            printf("You are not eligible to vote.\n");
        }

    return 0;
}

/*#include <stdio.h>

int main()
{
    int age;

    while(1)
    {
        printf("\nEnter your age (0 to exit): ");
        scanf("%d", &age);

        if (age == 0)
        {
            break;
        }

        if (age >= 18)
        {
            printf("You are eligible to vote.\n");
        }
        else
        {
            printf("You are not eligible to vote.\n");
        }
    }

    return 0;
} */