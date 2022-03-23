///---Stack---///
/*
#include<stdio.h>
#define N 5
int stack[N];
int top = -1;
void push()
{
    int x;
    printf("Enter the value: \n");
    scanf("%d", &x);
    if (top == N - 1)
    {
        printf("Overflow\n");
    }
    else
    {
        top++;
        stack[top] = x;
    }

}
void pop()
{
    int element;
    if (top == -1)
    {
        printf("Underflow\n");
    }
    else
    {
        element = stack[top];
        top--;
        printf("Popped element: %d\n", element);
    }
}
void display()
{
    if (top == -1)
    {
        printf("Underflow");
    }
    else
    {
        printf("Elements are: \n");
        for (int i = top; i >= 0; i--)
            printf(" %d ", stack[i]);
    }
}
int main()
{
    int num;
    do{
    printf("Enter a number: \n");
    scanf("%d", &num);
    switch(num)
    {
    case 1:
        push();
        break;
    case 2:
        pop();
        break;
    case 3:
        display();
        printf("\n");
        break;
    }
    }while(num != 0);
    return 0;
}
*/

///---Queue---///
/*
#include<stdio.h>
#define N 5
int queue[N];
int tail = 0, head = 0;

void enqueue()
{
    int num;
    printf("Enter the value: ");
    scanf("%d", &num);
    if (tail == N)
    {
        printf("OverFlow\n");
    }
    else
    {
        queue[tail] = num;
        tail++;
    }
}

void dequeue()
{
    int element;
    if (head && tail == 0)
    {
        printf("UnderFlow\n");
    }
    else
    {
        element = queue[head];
        head++;
        printf("Dequeued element: %d\n", element);
    }
}
void display()
{
    if(tail == 0)
    {
        printf("UnderFlow\n");
    }
    else
    {
        printf("Queue values: ");
        for (int i = head; i < tail; i++)
            printf("%d ", queue[i]);
        printf("\n");
    }
}
int main()
{
    int n;
    do{
    printf("Enter the number: ");
    scanf("%d", &n);
    switch(n)
    {
    case 1:
        enqueue();
        break;
    case 2:
        dequeue();
        break;
    case 3:
        display();
        break;
    }

    }while(n != 0);
    return 0;
}
*/

///---Single linked list---///
/*
#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node* link;
};

struct node* root = NULL;

void append()
{
    struct node* temp;
    temp = (struct node*)malloc(sizeof(struct node));
    printf("Enter a value: \n");
    scanf("%d", &temp -> data);
    temp -> link = NULL;
    if (root == NULL)
    {
        root = temp;
    }
    else
    {
        struct node* p;
        p = root;
        while(p -> link != NULL)
        {
            p = p -> link;
        }
        p -> link = temp;
    }
}

int length()
{
    struct node* temp;
    temp = root;
    int count = 0;
    while(temp != NULL)
    {
        count++;
        temp = temp -> link;
    }
    return count;
}

void first_insert()
{
    struct node* temp;
    temp = (struct node*)malloc(sizeof(struct node));
    printf("Enter the value: ");
    scanf("%d", &temp -> data);
    temp -> link = NULL;
    if (root == NULL)
    {
        root = temp;
    }
    else
    {
        temp -> link = root;
        root = temp;

    }
}
void middle()
{
    struct node* temp, *p;
    int location, len, i = 1;
    printf("Enter the location: ");
    scanf("%d", &location);
    len = length();
    printf("Number of nodes in list: %d\n", len);
    if (location > len)
    {
        printf("Location out of scope.\n");
    }
    else{
        p = root;
        while (location > i)
        {
            p = p -> link;
            i++;
        }
        temp = (struct node*)malloc(sizeof(struct node));
        temp -> link = p -> link;
        p -> link = temp;
        printf("Enter a value: \n");
        scanf("%d", &temp -> data);
    }
}
void removing_node()
{
    struct node* temp;
    int location, len;
    printf("Enter the location to delete: ");
    scanf("%d", &location);
    len = length();
    if (location > len)
    {
        printf("Location out of scope.\n");
    }
    else if (location == 1)
    {
        temp = root;
        root = temp -> link;
        temp -> link = NULL;
        free(temp);
    }
    else
    {
        struct node* p, *q;
        p = root;
        int i = 1;
        temp = root;
        while (location - 1 > i)
        {
            p = p -> link;
            i++;
        }
        q = p -> link;
        p -> link = q -> link;
        q -> link = NULL;
        free(q);
    }
}

void bubble_sort()
{
    int temp;
    struct node* temp1;
    struct node* temp2;
    for (temp1 = root; temp1 != NULL; temp1 = temp1 -> link)
    {
        for (temp2 = temp1 -> link; temp2 != NULL; temp2 = temp2 -> link)
        {
            if (temp1 -> data > temp2 -> data)
            {
                temp = temp2 -> data;
                temp2 -> data = temp1 -> data;
                temp1 -> data = temp;
            }
        }
    }
}

void display()
{
    struct node* temp;
    temp = root;
    if (temp == NULL)
    {
        printf("No elements.\n");
    }
    else
    {
        while (temp != NULL)
        {
            printf("%d --> ", temp->data);
            temp = temp -> link;
        }
        printf("\n\n");
    }

}

int main()
{
    int num;
    printf("Enter Number 1 to Create and add node.\nEnter Number 2 to add node at first.\nEnter Number 3 add node at specified location.\nEnter Number 4 to remove the node.\nEnter Number 5 to Display the list.\nEnter 6 to Sort the list.\n");

    do
    {
        printf("Enter a number: ");
        scanf("%d", &num);
        switch (num)
        {
        case 1:
            append();
            break;
        case 2:
            first_insert();
            break;
        case 3:
            middle();
            break;
        case 4:
            removing_node();
            break;
        case 5:
            printf("\n\tLength is: %d\n", length());
            display();
            break;
        case 6:
            printf("Sorted linked list.\n");
            bubble_sort();
        }
    }while(num != 0);

    return 0;
}
*/


