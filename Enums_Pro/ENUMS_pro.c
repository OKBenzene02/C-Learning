/*Project: Enums and their applications
time:20:30
date:8/12/2020
*/


/*
#include<stdio.h>
int main()
{
    enum company {GOOGLE, FACEBOOK, XEROX, YAHOO, EBAY, MICROSOFT};
    enum company xerox = XEROX;
    enum company google = GOOGLE;
    enum company ebay = EBAY;

    printf("Google: %d\n", GOOGLE);
    printf("xerox: %d\n", XEROX);
    printf("ebay: %d\n", EBAY);
    return 0;
}
*/
#include<stdio.h>
int main()
{
    enum company {GOOGLE, FACEBOOK, XEROX, YAHOO = 10, EBAY, MICROSOFT}; // if yahoo = 10 then nxt sequence will be 11, 12 ... so on.
    enum company xerox = XEROX;
    enum company google = GOOGLE;
    enum company ebay = EBAY;

    printf("Google: %d\n", GOOGLE);
    printf("xerox: %d\n", XEROX);
    printf("ebay: %d\n", EBAY);
    return 0;
}
