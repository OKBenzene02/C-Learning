/*
#include<stdio.h>
#define MONTH 12
#define YEAR 5
int main()
{
        float rain[YEAR][MONTH] =
    {
        {4.3,4.3,4.3,3.0,2.0,1.2,0.2,0.2,0.4,2.4,3.5,6.6},
        {8.5,8.2,1.2,1.6,2.4,0.0,5.2,0.9,0.3,0.9,1.4,7.3},
        {9.1,8.5,6.7,4.3,2.1,0.8,0.2,0.2,1.1,2.3,6.1,8.4},
        {7.2,9.9,8.4,3.3,1.2,0.8,0.4,0.0,0.6,1.7,4.3,6.2},
        {7.6,5.6,3.8,2.8,3.8,0.2,0.0,0.0,0.0,1.3,2.6,5.2}
    };

    int year, month;
    float subtot, total;

    printf("YEAR\t\tRAINFALL(inches) \n");

    for (year = 0, total = 0; year < YEAR; year++)
    {
        for (month = 0, subtot = 0; month < MONTH; month++)
        {
            subtot += rain[year][month];
        }
        printf("%5d %15.lf\n", 2010 + year, subtot);
        total += subtot;
    }

    printf("the yearly average is %.2lf inches.\n", total/YEAR);
    printf("MONTHLY AVERAGES: \n\n");
    printf("jan feb mar apr may jun jul aug sep oct nov dec \n");

    for (month = 0; month < MONTH; month++)
    {
        for (year = 0, subtot = 0; year < YEAR; year++)
        {
            subtot += rain[year][month];
        }
        printf("%4.lf ", subtot/YEAR);

    }
    printf("\n");


    return 0;
}
*/
