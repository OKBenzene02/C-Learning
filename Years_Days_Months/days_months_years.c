/*
#include<stdio.h>
int main()
{
    int minutes = 0;
    printf("Please enter minutes: ");
    scanf("%d", &minutes);
    double years = 0.0;
    double days = 0.0;
    double mintoyears = 0.0;

    mintoyears = (60 * 24 * 365);
    years = (minutes/mintoyears);
    days = (minutes/(60 * 24));

    printf("Minutes entered: %d\n", minutes);
    printf("Minutes into years: %g\n", mintoyears);
    printf("Years: %g\n", years);
    printf("days: %g\n", days);
    return 0;


}
*/

/*SIZE OF CHARACTER
int
char
long
long long
double
long double
*/

#include<stdio.h>
int main()
{
    printf("int space assigned: %zd\n", sizeof(int));
    printf("char space assigned: %zd\n", sizeof(char));
    printf("long space assigned: %zd\n", sizeof(long));
    printf("long long space assigned: %zd\n", sizeof(long long));
    printf("double space assigned: %zd\n", sizeof(double));
    printf("long double space assigned: %zd\n", sizeof(long double));
    return 0;
}
