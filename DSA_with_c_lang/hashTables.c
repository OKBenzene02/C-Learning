/*****
        Hash tables
        time:- 14:20
        date:- 25-11-2021
*****/
///---Linear Probing method---///
/*
#include <stdio.h>
#define n 11
int arr[n];

void LinearProbe()
{
    int index, hash, key, data;
    printf("Enter the key value: \n");
    scanf("%d", &key);
    printf("Enter the data value: \n");
    scanf("%d", &data);
    hash = key % n;
    for (int i = 0; i < n; i++)
    {
        index = (hash + i) % n;
        if (arr[index] == 0)
        {
            arr[index] = data;
            break;
        }
    }
}

void display()
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i])
        {
            printf(" %d ", arr[i]);
        }
        else
        {
            printf(" -- ");
        }
    }
    printf("\n");

}

int main()
{
    int num;
    do{
        printf("Enter the number: \n");
        scanf("%d", &num);
        switch(num)
        {
        case 1:
            LinearProbe();
            break;
        case 2:
            display();
            break;

        }
    }while(num != 0);

    return 0;
}
*/


///---Quadratic Probing method---///
/*
#include <stdio.h>
#define n 11
int arr[n];

void insert()
{
    int index, hash, key, data, C = 1, P = 3;
    printf("Enter the key value: \n");
    scanf("%d", &key);
    printf("Enter the data value: \n");
    scanf("%d", &data);
    hash = key % n;
    for (int i = 0; i < n; i++)
    {
        index = (hash + (C*i) + (P*i*i) ) % n;
        if (arr[index] == 0)
        {
            arr[index] = data;
            break;
        }
    }
}

void display()
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i])
        {
            printf(" %d ", arr[i]);
        }
        else
        {
            printf(" -- ");
        }
    }
    printf("\n");

}

int main()
{
    int num;
    do{
        printf("Enter the number: \n");
        scanf("%d", &num);
        switch(num)
        {
        case 1:
            insert();
            break;
        case 2:
            display();
            break;

        }
    }while(num != 0);

    return 0;
}
*/
