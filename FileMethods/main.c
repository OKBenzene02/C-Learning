/*** File methods
Time: 19:30
Date: 27-01-2022
***/
///--- Reading the contents of the file ---///
/*
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int c;
    FILE *pf = fopen("sampleC.txt", "r");

    if (pf == NULL)
    {
        printf("error opening file");
        return -1;
    }
    c = fgetc(pf);
    while(c != EOF)
    {
        printf("%c", c);
        c = fgetc(pf);
    }

    fclose(pf);
    pf = NULL;

    return 0;
}
*/

///--- Printing limited contents from a file ---///
/*
#include<stdio.h>

int main()
{
    char str[60];
    FILE *fp = fopen("sampleC.txt", "r");

    if (fp == NULL)
    {
        printf("error opening file\n");
        return -1;
    }

    if (fgets(str, 60, fp) != NULL)
        {
            printf("%s", str);
        }

    fclose(fp);
    fp = NULL;

    return 0;
}
*/

///--- Usage of fscanf ---///
/*
#include<stdio.h>

int main()
{
    FILE *fp = fopen("sampleC.txt", "w+");
    char a[10], b[10], c[10];
    int year;

    if (fp != NULL)
    {
        fputs("I am added to the file.", fp);
    }

    rewind(fp);

    fscanf(fp, "%s %s %s %d", a, b, c, &year);

    printf("String's are: |%s|\n |%s|\n |%s|\n Integer: |%d|", a, b, c, year);

    fclose(fp);
    fp = NULL;

    return 0;
}
*/

///--- writing to files ---///
/*
#include<stdio.h>

int main()
{
    FILE *fp = fopen("sampleC.txt", "w+");
    int ch;

    for (ch = 65; ch <= 100; ch++)
    {
        fputc(ch, fp);
    }

    fclose(fp);
    fp = NULL;

    return 0;
}
*/
/*
#include<stdio.h>

int main()
{
    FILE *fp = fopen("sampleC.txt", "w");

    fputs("This has a full stop.\n", fp);
    fputs("This doesnot have a full stop", fp);

    fclose(fp);
    fp = NULL;
    return 0;
}
*/

/*
#include<stdio.h>

int main()
{
    FILE *fp = fopen("sampleC.txt", "w+");

    if (fp != NULL)
        fprintf(fp, "%s %s %s %d", "hello i am", "goldy", "killer", 2313);

    fclose(fp);
    fp = NULL;

    return 0;
}
*/

///--- Position in the files ---///
/*
#include<stdio.h>

int main()
{
    int len = 0;
    FILE *fp = fopen("sampleC.txt", "r");

    if (fp == NULL)
    {
        printf("error opening the file.\n");
    }

    fseek(fp, 0, SEEK_END);

    len = ftell(fp);

    printf("The total file length is: %d", len);

    fclose(fp);
    fp = NULL;

    return 0;
}
*/
/*
#include<stdio.h>

int main()
{
    FILE *fp = fopen("sampleC.txt", "w+");

    fseek(fp, 5, SEEK_SET);
    fputs("Writing from pos 5", fp);

    fclose(fp);
    fp = NULL;

    return 0;
}
*/

/*
#include<stdio.h>

int main()
{
    FILE *fp = fopen("sampleC.txt", "w+");
    fpos_t position;

    fgetpos(fp, &position);
    fputs("Hello strings.", fp);

    fsetpos(fp, &position);
    fputs("this is going to be overwritten", fp);

    fclose(fp);
    fp = NULL;
    return 0;
}
*/

///--- Counting number of Lines ---///
/*
#include<stdio.h>
int main()
{
    int count = 0;
    char ch;
    FILE *fp = fopen("sampleC.txt", "r");

    ch = fgetc(fp);
    while(ch != EOF)
    {
        if (ch == '\n')
            count++;
        ch = fgetc(fp);
    }

    printf("The file has %d lines", count);

    fclose(fp);
    fp = NULL;
    return 0;
}
*/

///--- lower to upper case ---///
/*
#include<stdio.h>
#include<stdlib.h>

#define FILENAME "test.txt"

int main()
{
    FILE *fp = NULL;
    FILE *fp1 = NULL;
    char ch = ' ';

    fp = fopen("test.txt", "r");
    if (fp == NULL)
    {
        return -1;
    }

    fp1 = fopen("temp.txt", "w");
    if (fp1 == NULL)
    {
        return -1;
    }

    while ((ch= fgetc(fp)) != EOF)
    {
        if (islower(ch))
        {
            ch = ch - 32;
        }
        fputc(ch, fp1);
    }

    fclose(fp);
    fclose(fp1);

    remove(FILENAME);

    rename("temp.txt", FILENAME);

    remove("temp.txt");

    fp = fopen(FILENAME, "r");

    if (fp == NULL)
    {
        return -1;
    }

    while((ch = fgetc(fp)) != EOF)
    {
        printf("%c", ch);
    }

    fclose(fp);
    fp = NULL;
    fp1 = NULL;
    return 0;
}
*/

///--- Printing the file contents in reverse order ---///
/*
#include<stdio.h>
int main()
{
    FILE *fp = fopen("sampleC.txt", "r");
    int len;
    int i = 0;

    if (fp == NULL)
    {
        return -1;
    }

    fseek(fp, 0, SEEK_END);

    len = ftell(fp);

    while (i < len)
    {
        i++;
        fseek(fp, -i, SEEK_END);
        printf("%c", fgetc(fp));
    }
    printf("\n");

    fclose(fp);
    fp = NULL;

    return 0;
}
*/
