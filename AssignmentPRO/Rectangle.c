/*Liyakhat yousuf Mogal
Project: Calculating the area of rectangle
Time: 20:00
date: 8/12/2020
*/

#include<stdio.h>
int main()   //int main(int argc, char *argv[])
{
    double width, height, perimeter, area;
    //width = atoi(argv[1]);  //Using arguments assigning the values.
    //height = atoi(argv[2]);  //Project<Set program arguments<Add values<OK
    width = 55.6;
    height = 40.5;
    perimeter = 2 * (width + height);
    area = height * width;
    printf("width: %.2f\n", width);
    printf("height: %.2f\n", height);
    printf("perimeter: %.2f\n", perimeter);
    printf("area: %.2f\n", area);
    return 0;
}
