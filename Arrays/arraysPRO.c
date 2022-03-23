/*==========ARRAYS===========
Date: 19-12-2020
Time: 19:30
*/
//-----PRINTING NAME-----
/*
#include<stdio.h>
int main()
{
    char a[10];
    printf("Name: ");
    scanf("%s", a);

    printf("Name: %s", a);

    return 0;
}
*/
//------AVERAGE MARKS------
/*
#include<stdio.h>
int main(void)
{
    int grades[10];
    int count = 10;
    long sum = 0;
    float average = 0.0f;
    printf("Enter the 10 grades.\n");

    for (int i = 0; i < count; ++i)
    {
        printf("%3u>", i + 1);
        scanf("%d", &grades[i]);
        sum += grades[i];
    }

    average = (float)sum/count;
    printf("The average of the ten numbers: %2f\n", average);

    return 0;
}
*/

//-----EXAMPLE FOR ARRAYS---- (ELEMENTS)

/*
#include<stdio.h>
#define months 12
int main()
{
    int days[months] = {31, 28, 30, 31, 30, 31, 30, 31, 30, 31, 30, 31};
    int index;
    for (index = 0; index < months; index++)
    {
        printf("months %d has %2d days.\n", index + 1, days[index]);
    }

    return 0;
}
*/

//-----SQUARES OF ARRAY ELEMENTS------

/*
#include<stdio.h>
int main(void)
{
    int arry_values[10] = {1, 4, 9, 16};
    //int i;

    for (int i = 5; i < 10; ++i)
    {
        arry_values[i] = i*i;
        for (i = 0; i < 10; ++i)
        {
            printf("array_values[%i] = %i\n", i, arry_values[i]);
        }
    }
    return 0;

}
*/

/*
#include<stdio.h>
int main()
{
    int a[2][2];

    for(int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    for(int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d  ", a[i][j]);
        }
        printf("\n");
    }

    return 0;

}
*/

//2D ARRAY
/*
#include<stdio.h>
int main()
{
    int a[3][3] = {
        {1, 1, 2},
        {2, 3, 4},
        {4, 5, 1}
    };
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("\t %d", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}
*/

//-----EXAMPLE CODE FOR BOTH 1D AND 2D-----
/*
#include<stdio.h>
int main()
{
    int a[5] = {1, 2, 3, 4, 5};
    int b[2][2] = {{1, 2}, {3, 4}};

    for (int i; i < 5; i++)
    {
        printf("element- %d: %d\n", i, a[i]);
    }

    for (int i = 0; i < 2; i++)
    {
        for (int j =0; j < 2; j++)
        {
            printf("%d  ", b[i][j]);
        }
        printf("\n");
    }

    return 0;
}
*/

/*
//   =====4x4 MATRIX======

#include<stdio.h>
int main()
{
    int a[3][3][3] = {
        {{1, 2, 3},
        {1, 2, 3},
        {1, 2, 3}},
        {{2, 5, 6},
        {2, 5, 6},
        {2, 5, 6}}
    };
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 3; k++)
            {
                printf("\t%d", a[i][j][k]);
            }

        }
        printf("\n");
    }

    return 0;
}
*/

//-----ASCENDING ORDER------
/*
#include<stdio.h>
int main()
{
    int a[10];
    int temp;

    printf("enter the elements in the array: \n");

    for (int i = 0; i < 10; i++)
    {
        printf("element %d: ", i);
        scanf("  %d", &a[i]);
    }

    for (int i = 0; i < 10; i++)
    {
        for (int j = i + 1; j < 10; j++)
        {
            if (a[i] > a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }

    }

    for (int i = 0; i < 10; i++)
    {
        printf("%d  ", a[i]);
    }
    printf("\n\n");

    return 0;
}
*/
/*
#include<stdio.h>
int main()
{
    int sum, a[5];
    printf("enter positive numbers.\n");
    for (int i=0; i<5; i++)
    {
        scanf("%d", &a[i]);

        if (a[i] < 0)
        {
            continue;
        }

        sum += a[i];
    }
    printf("SUM:%d", sum);

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
