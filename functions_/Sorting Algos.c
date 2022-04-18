/***************
Date: 18-04-2022
Time: 19:09
***************/

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
    int value, i, hole;
    for (i = 1; i < n - 1; i++)
    {
        value = arr[i];
        hole = i;
        while(hole > 0 && arr[hole - 1] > value)
        {
            arr[hole] = arr[hole - 1];
            hole = hole - 1;
        }
        arr[hole] = value;
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

///--- Merge sort ---///
/*
#include<stdio.h>
#include<stdlib.h>
//int c[100];

void merge(int arr[],int low, int mid, int high)
{
    int i, j, k;
    int leftSize = mid - low + 1, rightSize = high - mid;
    int L[leftSize], R[rightSize];

    for (i = 0; i < leftSize; i++)
    {
        L[i] = arr[low + i];
    }

    for (j = 0; j < rightSize; j++)
    {
        R[j] = arr[mid + 1 + j];
    }

    i=0;
    j=0;
    k=low;

    while (i < leftSize && j < rightSize)
    {
        if (L[i] <= R[j])
        {
            arr[k] = L[i];
            i++;
        }
        else
        {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < leftSize)
    {
        arr[k] = L[i];
        i++;
        k++;
    }

    while (j < rightSize)
    {
        arr[k] = R[j];
        j++;
        k++;
    }
}

void mergeSort(int arr[], int low, int high)
{
    int mid;
    if (low < high)
    {
        mid = low + (high - low) / 2;
        mergeSort(arr, low, mid);
        mergeSort(arr, mid + 1, high);
        merge(arr, low, mid, high);
    }
}

int main()
{
    int arr[10] = {56, 34, 45, 11, 8, 23, 233, 22, 1, 2}, n = sizeof(arr)/sizeof(arr[0]);
    printf("Unsorted array: ");
    for (int i = 0; i < n; i++){
        printf(" %d ", arr[i]);
    }

    mergeSort(arr, 0, n - 1);

    printf("\nSorted array: ");
    for (int i = 0; i < n; i++)
    {
        printf(" %d ", arr[i]);
    }
    return 0;
}
*/

///--- Quick sort ---///
/*
#include<stdio.h>
#include<stdlib.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int partition(int arr[], int lo, int hi)
{
    int pivot = arr[lo], i = lo, j = hi;
    while(i < j)
    {
        do{
            i++;
        }while(arr[i] <= pivot);

        do{
            j--;
        }while(arr[j] > pivot);

        if (i < j)
        {
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[lo], &arr[j]);

    return j;
}

void quickSort(int arr[], int lo, int hi)
{
    if (lo < hi)
    {
        int j = partition(arr, lo, hi);
        quickSort(arr, lo, j);
        quickSort(arr, j + 1, hi);
    }

}

int main()
{
    int arr[] = {56, 34, 45, 11, 8, 23, 233, 22, 1, 2, 24, 45, 55, 57, 1, 2}, n = sizeof(arr)/sizeof(arr[0]);
    printf("Unsorted array: ");
    for (int i = 0; i < n; i++){
        printf(" %d ", arr[i]);
    }

    quickSort(arr, 0, n);

    printf("\nSorted array: ");
    for (int i = 0; i < n; i++)
    {
        printf(" %d ", arr[i]);
    }
    return 0;
}
*/
