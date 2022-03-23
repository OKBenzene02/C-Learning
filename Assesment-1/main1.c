//===========EVEN OR ODD===========
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
//====Calculate the sum of three numbers=====
/*
#include<stdio.h>
int main()
{
    int sum;
    int a[3];
    printf("enter the numbers: \n");
    for (int i = 0; i < 3; i++)
    {
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < 3; i++)
    {
        sum += a[i];
    }

    printf("sum: %d", sum);

    return 0;
}
*/

//=======Find greater and smaller=======
/*
#include<stdio.h>
int main()
{
    int a, b;
    printf("please enter two numbers to check which is greater: \n");
    scanf("%d %d", &a, &b);

    if (a > b)
    {
        printf("%d is greater than %d\n", a, b);
    }
    else
    {
        printf("%d is greater than %d\n", b, a);
    }

    return 0;
}
*/


//=====Sum of first 10 odd numbers=====
/*
#include<stdio.h>
int main()
{
    int sum;
    printf("Sum of first 10 odd numbers\n");

    for (int i = 1; i < 11; i += 2)
    {
        sum += i;
        printf("%d  ", i);
    }
    printf("\nThe sum of first 10 odd numbers: %d", sum);

    return 0;
}
*/

/*
#include <stdio.h>
#include<stdlib.h>

int main()
{
    int sum, i = 1;

    printf("Sum of first 10 odd numbers\n");

    while(i < 11)
    {
        sum += i;
        printf("%d  ", i);
        i += 2;
    }


    printf("\nresult: %d",sum);

    return 0;
}
*/
/*
#include<stdio.h>
int main()
{
    int a, mat, phy, chem;
    printf("please enter your roll number: \n");
    scanf("%d", &a);


    char b[10];
    printf("please enter your name: \n");
    scanf("%s", b);

    printf("PHYSICS: \n");
    scanf("%d", &phy);

    printf("MATHS: \n");
    scanf("%d", &mat);

    printf("CHEMISTRY: \n");
    scanf("%d", &chem);

    float total;
    total = (mat + phy + chem);
    float percentage;
    percentage = (total/3);

    printf("Percentage: %.2f%s\n", percentage, "%");

    return 0;
}
*/

/*
#include<stdio.h>
#define n 100
int main()
{
    int list[n];
    int to_search, size;

    printf("enter the size of the array: \n");
    scanf("%d", &size);

    printf("Enter the array elements: \n");
    for (int i = 0; i < size; i++)
    {
        printf("element-> %d ", i);
        scanf("%d", &list[i]);
    }

    printf("Enter the element to search: \n");
    scanf("%d", &to_search);
    for (int i = 0; i < size; i++)
    {
        if (list[i] == to_search)
        {
            printf("%d is the element at position %d.", to_search, i);
            break;
        }
         else
        {
            printf("%d element is not found.", to_search);
            break;
        }

    }

    return 0;
}
*/

/*
#include<stdio.h>
#include<string.h>
int main()
{
    char a[40];
    printf("FIRST NAME: ");
    scanf("%s", a);

    char b[40];
    printf("SECOND NAME: ");
    scanf("%s", b);

    printf("%s \n", strcat(a, b));

    return 0;
}
*/
/*
#include<stdio.h>
int main()
{
    int a[5], num, i;
    printf("enter 5 numbers.\n");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("enter a number to search.\n");
    scanf("%d", &num);
    int found = 0;
    for (i = 0; i < 5; i++)
    {
        if (a[i] == num)
        {
           found = 1;
           break;
        }
    }

     if (found == 1)
        {
            printf("the number you entered is %d found at position %d", num, i + 1);
        }

        else
        {
            printf("the number you entered is not the array.");
        }
    return 0;
}
*/
/*
#include<stdio.h>

float square(float a)
{
    return (a * a);
}
int main()
{
    float a, n;
    printf("enter a number to be squared.");
    scanf("%f", &a);
    n = square(a);
    printf("ANS: %.2f", n);
    return 0;
}
*/
/*
#include<stdio.h>
int main()
{
    int *p, a;
    p = &a;
    a = 10;
    printf("Address: %p\n", p);
    printf("Value: %d\n", a);

    return 0;
}
*/
/*
#include<stdio.h>
int main()
{
    char a[15];
    printf("Enter your name: \n");
    scanf("%s", a);
    float basic, da, salary;
    int code;

    printf("Enter your basic salary: \n");
    scanf("%f", &basic);

    long long int p;
    printf("enter your phone number: ");
    scanf("%ld", &p);

    printf("enter employee code: ");
    scanf("%d", &code);

    switch(code)
    {
    case 1:
        da = basic * 0.10;
        break;
    case 2:
        da = basic * 0.15;
        break;
    case 3:
        da = basic * 0.20;
        break;
    default:
        da = 0;
        break;
    }
    printf("=============================================================\n");
    printf("\t\tName: %s\n", a);
    salary = basic + da;
    printf("\t\tDa: %.2f\n", da);
    printf("\t\tTotal salary: %.2f\n", salary);
    printf("\t\tPhone number: %ld\n", p);
    printf("=============================================================\n");
    return 0;
}
*/
/*
# include<stdio.h>
#include<conio.h>
void main ()
{
float basic , da , salary ;
int code ;
char name[25];
da=0.0;
printf("Enter employee name\n");
scanf("%[^\n]",name);
printf("Enter basic salary\n");
scanf("%f",&basic);
printf("Enter code of the Employee\n");
scanf("%d",&code);
switch (code)
{
case 1:
da = basic * 0.10;
break;
case 2:
da = basic * 0.15;
break;
case 3:
da = basic * 0.20; break;
default :
da = 0;
}
salary = basic + da;
printf("Employee name is\n");
printf("%s\n",name);
printf ("DA is %f and Total salary is =%f\n",da, salary);
getch();
}
*/
/*
#include<stdio.h>

void main()
{
    int number;

    float temp, sqrt;

    printf("Provide the number: \n");

    scanf("%d", &number);

    // store the half of the given number e.g from 256 => 128
    sqrt = number / 2;
    temp = 0;

    // Iterate until sqrt is different of temp, that is updated on the loop
    while(sqrt != temp){
        // initially 0, is updated with the initial value of 128
        // (on second iteration = 65)
        // and so on
        temp = sqrt;

        // Then, replace values (256 / 128 + 128 ) / 2 = 65
        // (on second iteration 34.46923076923077)
        // and so on
        sqrt = ( number/temp + temp) / 2;
    }

    printf("The square root of '%d' is '%f'", number, sqrt);
}
*/
/*
#include<stdio.h>
int main()
{
    double num, temp, sqrt;

    printf("enter a number, to find the square root: ");
    scanf("%lf", &num);

    sqrt = num / 2;
    temp = 0;
     while (sqrt != temp)
     {
        temp = sqrt;

        sqrt = ((num / (temp + temp)) / 2;
     }
     printf("square root = %.2lf", sqrt);

    return 0;
}
*/
/*
#include<stdio.h>
int main()
{
    int n, fact;
    printf("enter a number: ");
    scanf("%d", &n);

    if (n == 0 || n == 1)
    {
        printf("value is 1");
    }
    fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact *= i;
    }

    printf("%d! = %d", n, fact);
    return 0;
}
*/
/*
#include<stdio.h>
int fact();
int n, result;
int main()
{
    printf("Enter a number: ");
    scanf("%d", &n);

    result = fact(n);

    printf("%d! = %d", n, result);

    return 0;
}
int fact(int n)
{
    if (n == 0)
    {
        result = 1;
    }
    else if (n < 0)
   {
        printf("error");
    }
    else
    {
        result = n*fact(n-1);
    }

    return result;
}
*/
/*
#include<stdio.h>
int main()
{
    int n, t1 = 0, t2 = 1, temp = 0;
    printf("Enter the series: ");
    scanf("%d", &n);

    printf("%d \n%d\n", t1, t2);

    for (int i = 3; i <= n; i++)
    {
        temp = t1 + t2;
        t1 = t2;
        t2 = temp;
        printf("%d\n", temp);
    }

    return 0;
}
*/
//-----SUM OF POSITIVE NUMBERS----
/*
#include<stdio.h>
int main()
{
    int num, sum;
    for (int i = 0; i < 5; i++)
    {
        printf("enter a number: ");
        scanf("%d", &num);

        if (num < 0)
            continue;
        sum += num;
    }

    printf("Sum = %d", sum);
    return 0;
}
*/
/*
#include<stdio.h>
double sqrt();
int main()
{
    double num;
    printf("Enter a number: \n");
    scanf("%lf", &num);

    printf("square root of %lf = %.2lf", num, sqrt(num));
    return 0;
}
double sqrt(double num)
{

    double result, temp;
    result = num;
    temp = result;
    if (result > 0)
    {

       for (int i = 0; i < 10; i++)
        {
            result = (result + (temp / result)) / 2; //---NEWTON RAPSHON METHOD---
        }
    }

    else
        result = -0.1;
    return result;
}
*/
