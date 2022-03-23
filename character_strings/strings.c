/*---Character strings----
Date: 7-02-2021
Time: 12:05
*/
/*
#include<stdio.h>
int main()
{
    char str1[] = "to be or not to be,";
    char str2[] = ",that is the question.";
    unsigned int count = 0;

    while (str1[count] != '\0')  // '\0' is the null character used to strings
        ++count;
    printf("the length of the string \"%s\" is %d characters.", str1, count);

    count = 0;
    while (str2[count] != '\0')
        ++count;

    printf("the length of the string \"%s\" is %d characters.", str2, count);

    return 0;
}
*/
/**preprocessor lets you define constants
for eg:- #define TAXRATE 0.015
#define can also be used for character strings

for eg:- #define BEEP '\a'
#define TEE 'T'
#define ESC '\033'
#define OOPS "now you have done it!"
**/

//---using string.h header file----
/*
#include<stdio.h>
#include<string.h>

int main()
{
    char a[] = "String examples.";
    printf("the length of the \"%s\" is %d", a, strlen(a));
    return 0;
}
*/
/*
#include<stdio.h>
#include<string.h>
int main()
{
    char a[30], b[30];
    strcpy(a, "This is string a.\n");
    strcpy(b, "This is string b.\n");

    printf("%s", a);
    printf("%s", b);

    return 0;
}
*/

//---string concatenation---
/*
#include<stdio.h>
#include<string.h>
int main()
{
    char a[] = "This is to be concatenated";
    printf("the length of is: %d\n", strlen(a));

    char b[] = "this is to be fixed";

    printf("the string %s is concatenated with: %s\n", a, b);
    printf("%s \n", strcat(a, b));

    return 0;
}
*/
/*
#include<stdio.h>
int main()
{
    if (strncmp("astronomy", "astro", 5) == 0)
        printf("Yes, it is correct");
    else
        printf("no not correct");

    return 0;
}
*/

//---searching, tokenizing & analyzing---
//SEARCHING
/*
#include<stdio.h>
#include<string.h>
int main()
{
    char a[] = "ok this gud";
    char p = 'k';
    char *p_got = NULL;
    p_got = strchr(a, p);

    printf("%s", p_got);

    return 0;
}
*/
/*
#include<stdio.h>
#include<string.h>
int main()
{
    char a[] = "This is going to be gud";
    char b[] = "going";
    char *p_got = NULL;
    p_got = strstr(a, b);

    printf("%s", p_got);

    return 0;
}
*/

//---tokenizing---
/*
#include<stdio.h>
#include<string.h>
int main()
{
    char a[40] = "this-is the example,of token.";
    const char s[] = "-,.";
    char *token;
    token = strtok(a, s);
    while (token != NULL)
    {
        printf("%s\n", token);
        token = strtok(NULL, s);
    }

    return 0;
}
*/
/*
//----converting strings-----
#include<stdio.h>
#include<string.h>
int main()
{
    char a[50];
    char b[40];

    printf("enter first string: \n");
    scanf("%s", a);

    printf("enter second string:\n");
    scanf("%s", b);

    printf("the first string entered is: %s\n", a);
    printf("the second string entered is: %s\n", b);

    for (int i = 0;(a[i] = (char) toupper(a[i])) != '\0'; i++);
    for (int i = 0;(b[i] = (char) tolower(b[i])) != '\0'; i++);

    printf("the second string %s in the first string.\n",(strstr(a, b) ==NULL)? "was not" :"was");

    return 0;
}
*/

//-----No of characters-----
/*
#include<stdio.h>
#include<stdlib.h>
void concat(char result[], const char cat1[] , const char cat2[]);
int main()
{
    char result[50];
    printf("enter the strings to be concatenated.\n");
    const char cat1[] = "ok";
    const char cat2[] = "this is going to work";
    concat(result, cat1, cat2);
    printf("Concatenated: %s\n", result);

}
void concat(char result[], const char cat1[] , const char cat2[])
{
    int i, j;
    for (i = 0; cat1[i] != '\0'; i++)
    {
        result[i] = cat1[i];
    }
    for (j = 0; cat2[j] != '\0'; j++)
    {
        result[i+j] = cat2[j];
    }

    result[i+j] = '\0';
}
*/

//-----Length of the string-----
/*
#include<stdio.h>
#include<stdlib.h>
int strlength(const char string[]);
int main()
{
   const char word1[] = "ok";
   const char word2[] = "this is going to work";

    printf("length: %d  %d", strlength(word1), strlength(word2));

    return 0;
}
int strlength(const char string[])
{
    int count = 0;

    while(string[count] != '\0')
        count++;
    return count;
}
*/
//-----Compare strings-----
/*
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
bool equalstrings(const char s1[], const char s2[]);
int main()
{
    printf("%d\n", equalstrings("liyakhat", "yousuf"));
    printf("%d\n", equalstrings("fajbvbsvib", "fajbvbsvib"));


    return 0;
}
bool equalstrings(const char s1[], const char s2[])
{
    int i;
    bool equal = false;
    while (s1[i] == s2[i]
           && s1[i] != '\0'
           && s2[i] != '\0')
            i++;
    if (s1[i] == '\0' && s2[i] == '\0')
        equal = true;
    else
        equal = false;

    return equal;
}
*/
/*
#include<stdio.h>
#include<stdlib.h>
int strlength(char word[]);
int main()
{
    char word[] = "This is the word";
    printf("The length is: %d", strlength(word));

}
int strlength(char word[])
{
    int count = 0;
    while (word[count] != '\0')
        count++;
    return count;
}
*/
/*
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int num, remainder, reversed = 0, original;
    printf("Please enter a number: ");
    scanf("%d", &num);
    original = num;

    while (num != 0)
    {
        remainder = num % 10;
        reversed = reversed * 10 + remainder;
        num /= 10;
    }
    if(original == reversed)
    {
        printf("it is a palindrome");
    }
    else
    {
        printf("it is not a palindrome");
    }
    return 0;
}
*/

//-----Strings Reversing and Strings sorting----
/*
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    char str[100];
    char name[25][50], temp[25];
    int l, i, n, j;
    printf("Enter a string: ");
    scanf("%s", str);
    l = strlen(str);
    for (i = l; i >= 0; i--)
    {
        printf("%c", str[i]);
    }
    printf("\n");

    printf("enter the number of strings: ");
    scanf("%d", &n);

    printf("input the string %d: ", n);

    for (i = 0; i < n; i++)
    {
        scanf("%s", name[i]);
    }

    for (i = 1; i <= n; i++)
        for (j = 0; j <= n-i; j++)
                if (strcmp(name[j], name[j+1])>0)
                {
                    strncpy(temp, name[j], sizeof(temp)-1);
                    strncpy(name[j], name[j+1], sizeof(name[j])-1);
                    strncpy(name[j+1], temp, sizeof(name[j+1])-1);
                }
    printf("strings after sorting: ");

    for (i = 0; i <= n; i++)
        printf("%s\n", name[i]);

    return 0;
}
*/

///---Number of Vowels and Consonants---///
/*
#include<stdio.h>
#include<string.h>
void Vowels_and_Consonants(char* str)
{
    int vowel = 0, consonants = 0, space = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' ||
            str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
        {
            vowel++;
        }
        else if (str[i] == ' ')
        {
            space++;
        }
        else
        {
            consonants++;
        }

    }
    printf("Vowels: %d\n", vowel);
    printf("Spaces: %d\n", space);
    printf("Consonants: %d\n", consonants);
}
int main()
{
    char* str = "vlenndvnvVLJDEjdvwhwkckjbaco2143215 avknsv wVLWNV";
    printf("String: %s\n", str);
    Vowels_and_Consonants(str);
    return 0;
}
*/
