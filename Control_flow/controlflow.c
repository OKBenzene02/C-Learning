/* CONTROL FLOW
time: 19:55
date: 11/12/2020
*/

//Even or Odd

/*
#include<stdio.h>
int main()
{
    int number;
    printf("please enter a number: ");
    scanf("%d", &number);

    if (number % 2 ==0)
        printf("Even number: %d", number);
    else
        printf("Odd number : %d", number);
    return 0;
}
*/

//Negative or Positive

/*
#include<stdio.h>
int main(void)
{
    int number, sign;
    printf("Please enter an integer number: ");
    scanf("%d", &number);

    if (number < 0)
    {
        sign = -1;
    }
    else if (number == 0)
    {
        sign = 0;
    }
    else
    {
        sign = 1;
    }
    printf("Sign = %d\n", sign);
    return 0;
}
*/

//SWITCH KEY

/*
#include<stdio.h>
int main()
{
    enum weekday {sunday, monday, tuesday};
    enum weekday today = monday;

    switch(today)
    {
        case sunday:
            printf("Today is sunday.");
            break;
        case monday:
            printf("Today is monday.");
            break;
        case tuesday:
            printf("Today is tuesday.");
            break;
        default:
            printf("maybe, its not the day.");
            break;

    }
    return 0;

}
*/

//SWITCH KEY EXAMPLE

/*
#include<stdio.h>
int main()
{
    float value1, value2;
    char operator1;

    printf("Type in your expression.\n");
    scanf("%f %c %f", &value1, &operator1, &value2);

    switch(operator1)
    {
    case '+':
        printf("%.2f\n", value1+value2);
        break;
    case '-':
        printf("%.2f\n", value1-value2);
        break;
    case '*':
        printf("%.2f\n", value1*value2);
        break;
    case '/':
        printf("%.2f\n", value1/value2);
        break;
    default:
        printf("Unknown operator.\n");
        break;
    }
    return 0;
}
*/

/*
#include<stdio.h>
int main()
{
    int value1, value2, operator1;

    printf("please type in your expression to calculate: ");
    scanf("%d %c %d", &value1, operator1, &value2);

    switch (operator1)
    {
        case '+':
            print("%2f", value1 + value2);
            break;
        case '-':
            printf("%2f", value1 - value2);
            break;
        case '*':
            printf("%2f", value1 * value2);
            break;
        case '/':
            printf("%2f", value1 / value2);
        default:
            printf("ERROR");
            break;

    }

    return 0;
}
*/

//FOR and WHILE loops
/*
#include<stdio.h>
int main()
{
    printf("----------TIMES TABLE---------\n");
    for (int i = 1; i <= 10; ++i)
    {
        for (int j = 1; j <= 10; ++j)
        {
            printf("%d x %d = %d\n", i, j, i * j);
        }
        printf("=========================\n");
    }

    return 0;
}
*/

/*
#include<stdio.h>
int main()
{
    for (int i = 1, j = 2 ; i <= 5; ++i, j += 2)
    {
        printf(" %5d", i * j);
    }
    return 0;
}
*/


/*
#include<stdio.h>
int main()
{
    printf("----------TIMES TABLE---------\n");
    for (int i = 1; i <= 10; ++i)
    {
        for (int j = 1; j <= 10; ++j)
        {
            printf("%d x %d = %d\n", i, j, i * j);
        }
        printf("=========================\n");
    }

    return 0;
}
*/

/*
#include<stdio.h>
int main()
{
    int long long sum = 0; //stores the sum of all the integers
    int count =0;
    printf("enter the number you want to add: ");
    scanf("%d", &count);
    for (int i; i <= count; ++i)
    {
        sum += i;
    }
    printf("total of %d is %d\n", count, sum);
    return 0;

}
*/


//WHILE and DO-while
/*
#include<stdio.h>
int main(void)
{
    int i;
    do
    {
        printf("value of i is %d\n", i);
        i++;
    }while ( i >= 5);


    return 0;
}
*/

/*
#include<stdio.h>
int main()
{
    int number;
    while (number <= 4)
    {
        printf("number: %d\n", number);
        ++number;
    }
   // while (number <= 4);

    return 0;

}
*/

//ARMSTRONG NUMBER
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

//FACTORIALS
/*
#include<stdio.h>
int main()
{
    int i, n;
    int fact = 1;
    printf("Please enter a number.");
    scanf("%d", &n);

    if (n < 0)
        printf("ERROR.");
    else
    {
        for (i = 1; i <= n ; ++i)
        {
            fact *= i;
        }
        printf("%d! = %d", n, fact);
    }

    return 0;
}
*/
/*
#include<stdio.h>
int main()
{
    int a, mat, phy, chem;
    printf("please enter your roll number: ");
    scanf("%d", &a);
    printf("ROLL NUMBER: %d", a);

    char b[10];
    printf("please enter your name: ");
    scanf("%s", b);
    printf("NAME: %s", b)

    printf("PHYSICS: ");
    scanf("%d", &phy);

    printf("MATHS: ");
    scanf("%d", &mat);

    printf("CHEMISTRY: ");
    scanf("%d", &chem);

    int total;
    toatal = (mat + phy + chem);
    float percentage;
    percentage = (total/270) * 100;

    printf("Percentage: %.2f%", percentage);



    return 0;
}
*/

