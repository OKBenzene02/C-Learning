/*
#include<stdio.h>
int main()
{
    int *a, *b, x, y;

    a = &x;
    b = &y;
    printf("value x: \n");
    scanf("%d", a);

    printf("value y: \n");
    scanf("%d", b);

    printf("add: %d\n", *a + *b);
    printf("subs: %d\n", *a - *b);
    printf("multi: %d\n", (*a)*(*b));
    printf("division: %d\n", (*a)/(*b));
    printf("remainder: %d\n", (*a)%(*b));


    return 0;
}
*/
///---Array pointer---///
/*
#include<stdio.h>
int main()
{
    int arr[10], *array;
//    int *const arrayEnd = arr + 10;
    printf("Enter the elements: \n");
    for (int i = 0; i < 10; i++)
    {
        printf("Element-%d: \n", i+1);
        scanf("%d", &arr[i]);
    }
    array = arr;
    printf("=========================\n");
    for (int i = 0; i < 10; i++)
    {
        printf("Element-%d: %d\n", i+1,  *(array + i));
    }

    return 0;
}
*/
///---Number of Characters Counting---///
/*
#include<stdio.h>
void counting(char* str)
{
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        count++;
    }
    printf("Total characters: %d\n", count);
}
int main()
{
    char* str = "liyu bhai ki class";
    printf("String Given: %s\n", str);
//    scanf("%s\n", str);
    counting(str);
    return 0;
}
*/

/***
const int *p --> cannot allow pointer value to be changed
int *const ---> cannot allow pointer address to be changed
void *ptr ---> Used to assign any value variable
***/
///---Even odd separating---///
/*
#include<stdio.h>
int main()
{
    int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 12}, even[10], odd[10], j = 0, k = 0, i;
    for (i = 0; i < 10; i++)
    {
        if (a[i] % 2 == 0)
        {
            even[j] = a[i];
            j++;
        }
        else
        {
            odd[k] = a[i];
            k++;
        }
    }
    printf("Even elements: ");
    for (i = 0; i < j; i++)
    {
        printf("%d  ", even[i]);
    }
    printf("\nOdd elements: ");
    for (i = 0; i < k; i++)
    {
        printf("%d  ", odd[i]);
    }
    return 0;
}
*/
///---Swapping---///
/*
#include<stdio.h>
void swapping(int *p, int *q)
{
    int temp;
    temp = *p;
    *p = *q;
    *q = temp;
}
int main(){
    int x, y;
    printf("Enter Two numbers: \n");
    scanf("%d %d", &x, &y);
    printf("Before swapping: \nNum-1: %d\nNum-2: %d", x, y);
    swapping(&x, &y);
    printf("\nAfter swapping: \nNum-1: %d\nNum-2: %d", x, y);
    return 0;
}
*/
///---Array example---///
/*
#include<stdio.h>
int main()
{
    int arr[10]= {1, -5, 34, -23, 23, 12, 9, 0, 10, 3}, *array, sum = 0;
    int *const arrayend = arr + 10;
    for (array = arr; array < arrayend; array++)
    {
        sum += *array;
    }
    printf("The sum of the elements: %d", sum);

    return 0;
}
*/
///---string example with addresses---///
/*
#include<stdio.h>
#include<string.h>
int main()
{
    char string[] = "acd asd";
    char *ptr = string;
    for (int i=0; i < strlen(string); i++)
    {
        printf("string[%d]: %c *(ptr + %d): %c &string[%d]: %p  ptr + %d: %p\n", i, string[i], i, *(ptr + i), i, &string[i], i, ptr+i);
    }

    return 0;
}
*/
///---Factorial using Pointers---///
/*
#include<stdio.h>
int main()
{
    int num, *fact, a = 1;
    fact = &a;
    printf("Enter a number: \n");
    scanf("%d", &num);
    if (num < 0)
        printf("Enter a positive number.\n");
    else if (num == 0 || num == 1)
    {
        printf("%d! = 1\n", num);
    }
    else
    {
        for (int i = 1; i <= num; i++)
            *fact *= i;
        printf("%d! = %d\n", num, *fact);
    }
   return 0;
}
*/
///---Descending order array---///
/*
#include<stdio.h>
int main()
{
    int a[10] = {1, -5, -6, 7, 8, 2, 23, 10, 90, 2}, temp, *arr;
    arr = a;
    for(int i = 0; i < 10; i++)
    {
        for (int j = i + 1; j < 10; j++)
        {
            if (*(arr + i) < *(arr + j))
            {
                temp = *(arr + i);
                *(arr + i) = *(arr + j);
                *(arr + j) = temp;
            }
        }
    }
    printf("Array with reverse oder: [");
    for (int i = 0; i < 10; i++)
    {
        printf(" %d ", *(arr + i));
    }
    printf("]\n");
    return 0;
}
*/
/*
#include<stdio.h>
void sqr(int *p)
{
    int a;
    a = *p;
    printf("x = %d", a * a);
}
int main()
{
    int b = 4;
    sqr(&b);
    return 0;
}
*/

///---Dynamic memory allocation---///
/*
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    char *str;

    ///memory allocation///
    str = (char*)(malloc(25 * sizeof(char)));
    strcpy(str, "liyu bhai");
    printf("String = %s, Address = %p\n", str, str);

    ///memory re-allocation///
    str = (char*)realloc(str, 25);
    strcat(str, " ki class");
    printf("String = %s, Address = %p", str, str);

    free(str);
    return 0;
}
*/

/// Example on dynamic memory allocation ///
/*
#include<stdio.h>
#include<stdlib.h>

int main()
{
    char *smtg;

    // Assigning a string to my pointer using malloc
    smtg = (char*)(malloc(sizeof(char)));
    printf("Enter a string: \n");
    scanf(" ");
    gets(smtg);

    printf("\nString: %s\nAddress: %p\n", smtg, smtg);

    free(smtg);

    return 0;
}
*/
