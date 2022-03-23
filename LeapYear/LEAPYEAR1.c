//ALL THE PROGRMAS ARE COMMENTED.

// LEAP YEAR
/*
#include<stdio.h>
int main()
{
    int year;
    printf("Please enter a year: \n");
    scanf("%d", &year);

    if (year % 4 == 0)
    {
        printf("%d is a leap year.\n", year);
    }
    else if (year % 100 == 0)
    {
        printf("%d is not a leap year.\n", year);
    }
    else if (year % 400 == 0)
    {
        printf("%d is a leap year.\n", year);
    }
    else
    {
        printf("%d is not a leap year.\n", year);
    }
    return 0;
}
*/

// AVERAGE AND GRADING
/*
#include<stdio.h>
int main()
{
    int maths, physics, chemistry, biology, computers;
    printf("Maths marks: ");
    scanf("%d", &maths);
    printf("physics marks: ");
    scanf("%d", &physics);
    printf("chemistry marks: ");
    scanf("%d", &chemistry);
    printf("biology marks: ");
    scanf("%d", &biology);
    printf("computer marks: ");
    scanf("%d", &computers);

    int average;

    average = (maths + physics + chemistry + biology + computers) / 5;

    printf("average: %d\n", average);

    if ((average >= 90) && (average <= 100))
    {
        printf("You got A grade\n");

    }
    else if ((average >= 70) && (average < 90))
    {
        printf("You got B grade\n");
    }
    else
    {
        printf("You got C grade\n");
    }

    return 0;
}
*/

// GREATEST NUMBER
/*
#include<stdio.h>
int main()
{
    double x, y, z;
    printf("Please enter three numbers: \n");
    scanf("%lf %lf %lf", &x, &y, &z);

    if ((x >= y) && (x >= z))
    {
        printf("%.2lf is highest number.\n", x);
    }
    else if ((y >= x) && (y >= z))
    {
        printf("%.2lf is highest number.\n", y);
    }
    else
    {
        printf("%.2lf is the highest number.\n", z);
    }
    return 0;
}
*/

// ARMSTRONG NUMBER
/*
#include<stdio.h>
int main()
{
    int number, declared, remainder, result = 0;
    printf("Enter a 3-digit number: ");
    scanf("%d", &number);
    declared = number;

    while (declared != 0)
    {
        remainder = declared % 10;

        result += remainder * remainder * remainder;

        // removing the last digit
        declared /= 10;
    }

    if (result == number)
        printf("%d is an armstrong number.", number);
    else
        printf("%d is not an armstrong number.", number);

    return 0;
}
*/

//ARMSTRONG NUMBER USING FOR LOOP
/*
#include<stdio.h>
int main()
{
    int number, declared, remainder, result = 0;
    printf("Enter a 3-digit number: ");
    scanf("%d", &number);

    for (declared = number; declared != 0 ; declared /= 10)
    {
        remainder = declared % 10;

        result += remainder * remainder * remainder;

    }

    if (result == number)
        printf("%d is an armstrong number.\n", number);
    else
        printf("%d is not an armstrong number.\n", number);


    return 0;
}
*/

//----Month---
/*
#include<stdio.h>
int main()
{
    int num;
    printf("Enter the number between 1 to 12:");
    scanf("%d", &num);
    switch (num)
    {
    case 1:
        printf("JANUARY");
        break;
    case 2:
        printf("FEBRUARY");
        break;
    case 3:
        printf("MARCH");
        break;
    case 4:
        printf("APRIL");
        break;
    case 5:
        printf("MAY");
        break;
    case 6:
        printf("JUNE");
        break;
    case 7:
        printf("JULY");
        break;
    case 8:
        printf("AUGUST");
        break;
    case 9:
        printf("SEPTEMBER");
        break;
    case 10:
        printf("OCTOBER");
        break;
    case 11:
        printf("NOVEMBER");
        break;
    case 12:
        printf("DECEMBER");
        break;
    default:
        printf("please enter number between 1 to 12:");
        break;
    }
    return 0;
}
*/
