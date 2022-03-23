///---String reversal---///
/*
#include<stdio.h>
#include<string.h>
#define N 100
char stack[N];
int top = -1;
void push(char x)
{
    if (top == N - 1)
    {
        printf("Overflow");
    }
    else
    {
        top++;
        stack[top] = x;
    }

}
void pop()
{
    if (top == -1)
    {
        printf("Underflow");
    }
    else
    {
        printf("%c", stack[top]);
        top--;
    }
}

int main()
{
    char string[] = "Hello good morning";
    int len = strlen(string);
    for (int i = 0; i < len; i++)
        push(string[i]);
    for (int i = 0; i < len; i++)
        pop();

    return 0;
}
*/

///--- Implementation of Factorial using stack ---///
/*
#include<stdio.h>
#define N 100
int stack[N], top = -1;

void push(int n)
{
    if (top == N - 1)
    {
        printf("Overflow\n");
    }
    else
    {
        top++;
        stack[top] = n;
    }

}

int topfunc()
{
    if (top == -1)
    {
        printf("UnderFlow");
        return -1;
    }
    else
    {
        return stack[top];
    }
}

void pop()
{
    if (top == -1)
    {
        printf("UnderFlow\n");
    }
    else
    {
        top--;
    }
}

int main()
{
    int ele;
    printf("Enter a number: \n");
    scanf("%d", &ele);

    push(1);

    for (int i = 2; i <= ele; i++)
    {
        push(topfunc() * i);
    }

    printf("%d! = %d", ele, topfunc());

    return 0;
}
*/

///--Implementation of Stack using linked list--///
/*
#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node* link;
};

struct node* root = NULL;

void push()
{
    struct node* temp;
    temp = (struct node* )malloc(sizeof(struct node));
    printf("Enter a value: ");
    scanf("%d", &temp -> data);
    temp -> link = root;
    root = temp;
}

void pop()
{
    struct node* temp;
    if (root == NULL)
    {
        printf("Stack UnderFlow\n");
    }
    else{
        printf("Popped element: %d\n", root -> data);
        temp = root;
        root = root -> link;
        free(temp);
    }
}
void display()
{
    struct node* temp;
    temp = root;
    if (temp == NULL)
    {
        printf("Stack UnderFlow.\n");
    }
    else
    {
        printf("Elements in stack: ");
        while(temp != NULL)
        {
            printf("%d -> ", temp -> data);
            temp = temp -> link;
        }
        printf("\n");
    }
}
int main()
{
    int num;
    do
    {
        printf("Enter a number: ");
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
            break;
        }
    }while(num != 0);
    return 0;
}
*/

///---Queue implementation using linked list---///
/*
#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node* link;
};

struct node *head = NULL, *tail = NULL;

void enqueue()
{
    struct node* temp;
    temp = (struct node*)malloc(sizeof(struct node));
    printf("Enter the value: ");
    scanf("%d", &temp->data);
    temp -> link = NULL;
    if (tail == NULL)
    {
        tail = head = temp;
    }
    else
    {
        struct node* p;
        p = tail;
        while (p -> link != NULL)
        {
            p = p -> link;
        }
        p -> link = temp;
    }
}

void dequeue()
{
    struct node* temp;
    if (tail && head == NULL)
    {
        printf("Queue UnderFlow\n");
    }
    else
    {
        printf("Dequeued element: %d\n", head -> data);
        temp = head;
        head = head -> link;
        free(temp);
    }
}
void display()
{
    struct node* temp;
    temp = head;
    if (temp == NULL)
    {
        printf("Queue UnderFlow.\n");
    }
    else
    {
        printf("Queue Elements: ");
        while(temp != NULL)
        {
            printf("%d ", temp -> data);
            temp = temp -> link;
        }
        printf("\n");
    }

}

int main()
{
    int num;
    do
    {
        printf("Enter a number: ");
        scanf("%d", &num);
        switch(num)
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
    }while(num != 0);
    return 0;
}
*/

///---Polynomial program using linked lists---///
/*
#include<stdio.h>
#include<stdlib.h>

struct node{
    int coeff;
    int exp;
    struct node* link;
};

struct node *root = NULL;

void polynomial(){
    struct node* temp;
    temp = (struct node* )malloc(sizeof(struct node));
    temp -> link = NULL;
    printf("Enter the coefficient: \n");
    scanf("%d", &temp -> coeff);
    printf("Enter the Power: \n");
    scanf("%d", &temp -> exp);
    if (root == NULL){
        root = temp;
    }
    else{
        struct node* p;
        p = root;
        while(p ->link != NULL){
            p = p ->link;
        }
        p ->link = temp;
    }
}

void equation()
{
    if (root == NULL)
    {
        printf("No inputs given.\n");
    }
    else
    {
        struct node* p;
        p = root;
        while (p != NULL)
        {
            printf(" (%dx^%d) ", p -> coeff, p -> exp);
            p = p -> link;
            if(p != NULL)
            {
                printf("+");
            }
            else
            {
                printf("\n");
            }
        }
    }

}


int main(){
    int num;
    do
    {
        printf("Enter a number: \n");
        scanf("%d", &num);
        switch(num)
        {
        case 1:
            polynomial();
            break;
        case 2:
            equation();
            break;
        }
    }while(num != 0);
    return 0;
}
*/


