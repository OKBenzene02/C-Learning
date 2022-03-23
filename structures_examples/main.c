/*
#include<stdio.h>
struct Something
{
    int smtg;
    char string_dede[30];
};
int main()
{
    struct Something o = {1234, "ye string dede mere aaka."};
    printf("Size of Something datatype is %d\n", (int)sizeof(struct Something));
    printf("Size of Something datatype is %d\n", (int)sizeof(o));
    printf("%d\n", o.smtg);
    printf("%s\n", o.string_dede);
    return 0;
}
*/

///---Example 2---///
/*
#include<stdio.h>
struct date{
    int day;
    int month;
    int year;
};

int main(){
    struct date today;
    today.day = 12;
    today.month = 3;
    today.year = 2021;
    printf("Today date is %d/%d/%d", today.day, today.month, today.year);
    return 0;
}
*/

///---Initializing of struct using arrays---///
/*
#include<stdio.h>
struct date{
    int day;
    int month;
    int year;
};

int main(){
    struct date today[5] = {{12, 12, 2021}, {11, 23, 2021}, {23, 15, 2021}, {43, 56, 2021},  {33, 31, 2021},};
    for (int i = 0; i < 5; i++)
    {
    printf("Today date is %d/%d/%d\n", today[i].day, today[i].month, today[i].year);
    }
    return 0;
}
*/

///---Struct and pointers---///
/*
#include<stdio.h>

struct date{
    int month;
    int day;
    int year;
};

int main()
{
    struct date today, *dtptr;
    dtptr = &today;

    dtptr -> month = 10;
    dtptr -> day = 21;
    dtptr -> year = 2012;

    printf("%d-%d-%d", (*dtptr).month, dtptr -> day, dtptr -> year);

    return 0;
}
*/

///--- Example of struct ---///
/*
#include<stdio.h>

struct Employee
{
    char name[30];
    int hireDate;
    float sal;
};

int main()
{
    struct Employee emp1 = {"Liyakhat", 2017, 112.23};
    struct Employee emp2 = {"Liyakhat", 2017, 112.23};
    struct Employee emp3 = {"Liyakhat", 2017, 112.23};
    printf("Employee-1 : \n%s\n%d\n%.2f\n", emp1.name, emp1.hireDate, emp1.sal);
    printf("Employee-2 : \n%s\n%d\n%.2f\n", emp2.name, emp2.hireDate, emp2.sal);
    printf("Employee-3 : \n%s\n%d\n%.2f\n", emp3.name, emp3.hireDate, emp3.sal);
    return 0;
}
*/

///--- Example of struct ---///
#include<stdio.h>
#include<stdlib.h>

struct Item
{
    char *itemName;
    int quantity;
    float price;
    float amount;
};

void read_item(struct Item *name)
{
    printf("Enter item name: \n");
    scanf("%s", name->itemName);

    printf("Enter quantity: \n");
    scanf("%d", &name->quantity);

    printf("Enter price: \n");
    scanf("%f", &name->price);

    name ->amount = ((float)name->price) * (name->quantity);
}

void print_item(struct Item *name)
{
   printf("item name: %s \n", name->itemName);
   printf("quantity: %d\n", name->quantity);
   printf("price: %.2f\n", name->price);
   printf("amount: %.2f\n", name->amount);
}

int main()
{
    struct Item itm;
    struct Item *pitm = &itm;
    pitm ->itemName = (char *)malloc(30 * sizeof(char));

    read_item(pitm);
    print_item(pitm);
    return 0;
}
