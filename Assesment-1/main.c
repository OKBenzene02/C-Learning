/*
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int num , digit = 0;
    printf("enter a number: ");
    scanf("%d", &num);

    while(num != 0)
    {
        digit = (digit * 10) + (num % 10);
        num /= 10;

    }
    num = digit;

    while (num > 0)
    {
        switch (num % 10)
        {
        case 0:
            printf("zero ");
            break;
        case 1:
            printf("one ");
            break;
        case 2:
            printf("two ");
            break;
        case 3:
            printf("three ");
            break;
        case 4:
            printf("four ");
            break;
        case 5:
            printf("five ");
            break;
        case 6:
            printf("six ");
            break;
        case 7:
            printf("seven ");
            break;
        case 8:
            printf("eight ");
            break;
        case 9:
            printf("nine ");
        default:
            printf("ERROR ");
            break;
        }
        num /= 10;
    }
return 0;
}*/





