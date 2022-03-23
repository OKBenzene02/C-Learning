/**Date- 25-01-2021
Time- 20:30
**/

///-----FUNCTION EXAMPLE-----
/*
#include<stdio.h>
void multiplytwonumbers(int x, int y)
{
    int result;
    result = x*y;
    printf("%d * %d = %d \n", x, y, result);
}
int main()
{
    multiplytwonumbers(10, 20);
    multiplytwonumbers(40, 50);

    return 0;
}
*/

///-----GREATEST NUMBER AMONG 3-------
/*
#include <stdio.h>
#include <stdlib.h>
biggestNumber(int,int,int);//function prototype
int main()
{
    int a,b,c;
    printf("Enter the three numbers\n");
    scanf("%d%d%d",&a,&b,&c);
//read the numbers from user
    int result=biggestNumber(a,b,c);//function call
    printf("Biggest number is: %d\n",result);
//display the output on the screen
    //getch();
    return 0;
}
int biggestNumber(int a,int b,int c){//function definition with parameter
if(a>b)
{
    if(a>c)
    return a;
    else
        return c;
}
else
{
    if(b>c)
        return b;
    else
        return c;
}
}
*/
/*
#include<stdio.h>
int maxofnumbers();
int main()
{
    int a, b, c, result;
    printf("Please enter 3 numbers: \n");
    scanf("%d %d %d", &a, &b, &c);
    result = maxofnumbers(a, b, c);

    printf("the greatest number is: %d\n", result);
}
int maxofnumbers(int a, int b, int c)
{
    if (a>b && a>c)
    {
        return a;
    }

    else if (b>a && b>c)
    {
        return b;
    }
    else
    {
        return c;
    }


}
*/

///-----FUNCTIONS EXAMPLES-----
/*
#include<stdio.h>
#include<stdlib.h>

int gcd(int a, int b);
float absoluteValue(float x);
float squareroot(float x);

int main()
{
    int result;

    float f1 = -15.5, f2 = 20.0, f3 = -5.0;
    int i1 = -716;
    float absoluteValueResult = 0.0;


    result = gcd(150, 35);
    printf("GCD of 150, 35: %d\n", result);

    result = gcd(200, 5);
    printf("GCD of 200, 5: %d\n", result);

    result = gcd(14, 4);
    printf("GCD of 14, 4: %d\n\n\n", result);

    // Testing the absolute value

    absoluteValueResult = absoluteValue(f1);
    printf("result = %.2f\n", absoluteValueResult);
    printf("f1 = %.2f\n", f1);

    absoluteValueResult = absoluteValue(f2) + absoluteValue(f3);
    printf("result = %.2f\n", absoluteValueResult);

    absoluteValueResult = absoluteValue((float) i1);
    printf("result = %.2f\n", absoluteValueResult);

    printf("result = %.2f\n", absoluteValue(-6.0/ 4));

    //---Square root----
    printf("%.2f\n", squareroot(-3.0));
    printf("%.2f\n", squareroot(2.0));
    printf("%.2f\n", squareroot(4.0));
    printf("%.2f\n", squareroot(16.0));
    printf("%.2f\n", squareroot(3.0));
    printf("%.2f\n", squareroot(0.16));


    return 0;
}
int gcd(int a, int b)
{
    int temp;

    while (b != 0)
    {
        temp = a % b;
        a = b;
        b = temp;
    }

    return a;
}
float squareroot(float x)
{
    const float epsilon = .00001;
    float guess = 0.1;
    float returnValue = 0.0;

    if (x < 0)
    {
        printf("Negative argument to square root.");
        returnValue = -1.0;
    }

    if (returnValue != -1.0)
    {
        while (absoluteValue (guess * guess -x) >= epsilon)
        {
            guess = (x / guess + guess) / 2.0;
            returnValue = guess;
        }
        returnValue = guess;
    }
    return returnValue;
}

float absoluteValue(float x)
{
    if (x < 0)
    {
        x = -x;
    }
    return x;
}
*/

///-----FACTORIAL----(RECURSION)
/*
#include<stdio.h>
int main()
{
    int n, res;
    printf("Enter a number for n: ");
    scanf("%d", &n);
    res = fact(n);
    printf("n! = %d", res);
}
int fact(int n)
{
    int res;
    if (n == 0)
    {
        res = 1;
    }
    else if (n < 0)
    {
        printf("error");
    }
    else
    {
        res = n*fact(n-1);
    }

    return res;
}
*/
/*********************************
FUNCTIONS FOR SWAPPING TWO NUMBERS
*********************************/
/*
#include <stdio.h>



void swap(int , int );

int main () {



int a = 100;

int b = 200;

printf("Before swap, value of a : %d\n", a );

printf("Before swap, value of b : %d\n", b );



swap(a, b);

printf("After swap, value of a : %d\n", a );

printf("After swap, value of b : %d\n", b );

return 0;

}

void swap(int x, int y)
{

int temp;

temp = x;

x = y;

y = temp;

return ;

}
*/

///----Swapping of two numbers using pointers----///
/*
#include<stdio.h>
void swap();
int main()
{
    int num1, num2;

    printf("Number-1 = \n");
    scanf("%d", &num1);
    printf("Number-2 = \n");
    scanf("%d", &num2);

    printf("Before swapping:-\n");
    printf("\tNumber-1 = %d\n\tNumber-2 = %d\n", num1, num2);

    swap(&num1, &num2);

    printf("After swapping:-\n");
    printf("\tNumber-1 = %d\n\tNumber-2 = %d\n", num1, num2);

    return 0;
}
void swap(int *a, int *b)
{
    int varswap;

     varswap = *a;
    *a = *b;
    *b = varswap;

}
*/
///----Printing the values of array using pointers----///
/*
#include<stdio.h>
int main()
{
    int *ptr, a[10] = {1, 2, 3, 4, 5};
    ptr = a;
    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", *ptr);
        ptr++;
    }
    return 0;
}
*/
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
///----Towers of Hanoi----///
/*
#include<stdio.h>
void Towers(int n, int A, int B, int C)
{
    if (n > 0)
    {
        Towers(n - 1, A, C, B);
        printf("Move disc %d to %d\n", A, C);
        Towers(n - 1, B, A, C);
    }

}
int main()
{
    Towers(3, 1, 2, 3);
    return 0;
}
*/
///---Bubble Sort---///
/*
#include<stdio.h>
#define N 100
void bubble_sort(int array[], int n)
{
    int temp;

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (array[i] > array[j])
            {
                temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }
}
int main()
{
//    int array[] = {34, 1, 2, 56, 4, 23, 78}, n = sizeof(array)/sizeof(array[0]);
    int n = 0, array[N];
    printf("enter the array size: ");
    scanf("%d", &n);
    printf("\n");
    for (int i = 0; i < n; i++)
    {
        printf("enter the element %d: ", i);
        scanf("%d", &array[i]);
    }
    bubble_sort(array, n);
    printf("The sorted array is: ");
    for (int i=0; i < n; i++)
        printf("%d ", array[i]);
    return 0;
}
*/

///---Selection Sort---///
/*
#include<stdio.h>

void selectionSort(int arr[], int n)
{
    int temp, min;
    for (int i = 0; i <= n - 2; i++)
    {
        min = i;
        for (int j = i + 1; j <= n - 1; j++)
        {
            if (arr[j] < arr[min])
            {
                min = j;
            }
        }
        temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }
}

int main()
{
    int arr[] = {12, 34, 10, 9, 8, 45, 11}, n = sizeof(arr)/sizeof(arr[0]);

    selectionSort(arr, n);

    printf("Sorted elements are: ");
    for (int i = 0; i < n; i++)
    {
        printf(" %d ", arr[i]);
    }
    return 0;
}
*/

///--- Binary search ---///
/*
#include<stdio.h>
int search(int arr[], int ele, int n)
{
    int low = 0;
    int high = n - 1;

    while (low <= high)
    {
        int mid = (high + low)/2;
        if (arr[mid] > ele)
        {
            high = mid - 1;
        }

        if (arr[mid] < ele)
        {
            low = mid + 1;
        }

        if (arr[mid] == ele)
        {
            return mid;
        }
    }

    return -1;

}

int main()
{
    int arr[] = {12, 23, 34, 45, 56, 67, 78}, n = sizeof(arr)/sizeof(arr[0]), ele;
    printf("enter the element to search: \n");
    scanf("%d", &ele);
    int result = search(arr, ele, n);
    (result == -1) ? printf("element not found.\n") : printf("element found at position %d\n", result);
    return 0;
}
*/


///--- Heap sort ---///
/*
#include<stdio.h>

void swap(int *a, int *b)
{
    int temp= *a;
    *a = *b;
    *b = temp;
}

void heapify(int arr[], int n, int i)
{
    int largest = i;
    int left = (2 * i) + 1;
    int right = (2 * i) + 2;

    if (left < n && arr[left] > arr[largest])
    {
        largest = left;
    }
    if (right < n && arr[right] > arr[largest])
    {
        largest = right;
    }

    if (largest != i)
    {
        swap(&arr[i], &arr[largest]);
        heapify(arr, n, largest);
    }
}

void heapSort(int arr[], int n)
{
    for (int i = n / 2 - 1; i >= 0; i--)
    {
        heapify(arr, n, i);
    }
    for (int i = n - 1; i >= 0; i--)
    {
        swap(&arr[0], &arr[i]);
        heapify(arr, i, 0);
    }
}

void display(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf(" %d ", arr[i]);
    }
    printf("\n");
}

int main()
{
    int array[] = {82,90,10,12,15,77,55,23}, n = sizeof(array)/sizeof(array[0]);

    heapSort(array, n);
    printf("The sorted array is ");
    display(array, n);
    return 0;
}
*/

///--- insertion sort ---///
/*
#include<stdio.h>

void insertionSort(int arr[], int n)
{
    int temp, p, q;
    for (p = 1; p < n; p++)
    {
        temp = arr[p];
        q = p - 1;
        while(q >= 0 && arr[q] > temp)
        {
            arr[q + 1] = arr[q];
            q = q - 1;
        }
        arr[q + 1] = temp;
    }
}

int main()
{
    int arr[] = {12, 5, 1, 2, 45}, n = sizeof(arr)/sizeof(arr[0]);
    insertionSort(arr, n);
    printf("Sorted elements are: ");
    for (int i = 0; i < n; i++)
    {
        printf(" %d ", arr[i]);
    }

    return 0;
}
*/

///--- sum of n natural numbers ---///
/*
#include<stdio.h>

int SumNat(int n)
{
    if (n == 0)
        return 0;
    else
    {
        return n + SumNat(n - 1);
    }
}

int main()
{
    int num = 20;
    int p = SumNat(num);
    printf("Sum is %d\n", p);
    return 0;
}
*/
/*
#include<stdio.h>

int fibbo(int n)
{
    if (n == 0 || n == 1)
    {
        return n;
    }
    else
    {
        return fibbo(n - 1) + fibbo(n - 2);
    }
}

int main()
{
    int n = 12;
    printf("Fibonacci number of %d is %d", n, fibbo(n));
    return 0;
}
*/
/*
#include<stdio.h>

int fact(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    else
    {
        return n * fact(n - 1);
    }
}

int main()
{
    int n = 5;
    printf("%d! = %d", n, fact(n));
    return 0;
}
*/
/*
#include<stdio.h>

int Posittion(int arr[], int ele, int n)
{
    for (int i = 0; i < n; i++)
    {
        if(arr[i] == ele)
        {
            return i;
        }
    }

    return -1;
}

int main()
{
    int arr[] = {12, 23, 34, 45, 56, 67, 78, 89}, n = sizeof(arr)/sizeof(arr[0]);
    int res = Posittion(arr, 67, n);
    (res == -1) ? printf("element not found.\n") : printf("element found at position %d.\n", res);
    return 0;
}
*/

