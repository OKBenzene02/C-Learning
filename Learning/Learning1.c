/*Started learning C.
Date- 5-12-2020
Time-17:12
For remembering comments added and learning C/C++*/

/*
#include<stdio.h>
int main()
{
   int value1, value2, adding;
   value1 = 115;
   value2 = 20;
   adding = value1 + value2;
   printf("the addition of %d and %d is %d", value1, value2, adding);
   return 0;
}
*/

/*
#include<stdio.h>
int main()
{
    char str[100];
    int i;
    printf("Enter a value: ");
    scanf("%s %d", str, &i);
    printf("\nYou entered: %s %d\n", str, i);
    return 0;
}
*/
/*
#include<stdio.h>
int main()
{
    int x= -5;
    printf("the negative number:%d", x);
    printf("\nthen the next line");
    return 0;
}
*/
/*
#include<stdio.h>
int main()
{
    char grade = 65;    // ASCII characters
    printf("%c", grade);
    return 0;
}
*/
/*
#include<stdio.h>
int main()
{
    char name;
    scanf("%c", name);
    printf("my name: %s ", name);
    return 0;
}
*/

#include<stdio.h>
int main()
{
    int integer = 100;
    float float_1= 1.200;
    double double_1 = 8.44e+11;
    char charcter[10] = "Wok";
    _Bool boolean1= 1;
    printf("%d", integer);
    printf("%f\n", float_1);
    printf("%g\n", double_1);
    printf("%s\n", charcter);
    printf("%i\n", boolean1);
    return 0;
}

/*
#include<stdio.h>
int main()
{
    char z[10];
    putchar(z);                //Solution for the error code after a particular reserach
    //scanf("%c", z);          // Using an array
    scanf("%s", z);
    printf("My name: %s", z);
    return 0;
}
*/
/*
#include<stdio.h>
int main()
{
    int num;
    printf("please enter a number:");
    scanf("%d", &num);
    if(num%2==0  num%)
    {
        num++;
        //printf("the incremented number: %d", num)
    }
    else
    {
        num--;
    }
    printf("the incremented/decremented number: %d", num);
    return 0;
}
*/
/*
#include<stdio.h>
int main()
{
    int num, num1, num2, num3;
    num = 10;
    printf("enter first number:");
    scanf("%d", &num1);
    printf("enter second number:");
    scanf("%d", &num2);
    printf("enter third number:");
    scanf("%d", &num3);
    if((num1>num2)?num1:num2)
    {
        num++;
    }
    else if ((num2>num3)?num2:num3)
    {
        num++;
    }
    else
    {
        num--;
    }
    printf("the number incremented/decremented is: %d", num);
    return 0;
}
*/
/*
#include<stdio.h>
int main(int argc, char *argv[])
{
    int numberOFarguments = argc;
    char *argument1 = argv[0];
    char *argument2 = argv[1];

    printf("Number of arguments: %d\n", numberOFarguments);
    printf("Argument 1 is the program name: %s\n", argument1);
    printf("Argument 2 is the command line argument: %s\n", argument2);
    return 0;
}
*/


































