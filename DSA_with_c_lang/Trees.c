///---BST (Binary search tree)---///
/*
#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node* right;
    struct node* left;
};

struct node* root = NULL;

void adding_node()
{
    struct node* temp, *p;
    temp = (struct node*)malloc(sizeof(struct node));
    printf("Enter a value for the %s: \n", (root == NULL) ? "root" : "node");
    scanf("%d", &temp -> data);
    temp -> left = NULL;
    temp -> right = NULL;
    p = root;
    if (root == NULL)
    {
        root = temp;
    }
    else{
        struct node* current;
        current = root;
        while (current)
        {
            if (temp -> data > current -> data)
            {
                current = current -> right;

            }
            else
            {
                current = current -> left;

            }
        }
        if (temp -> data > p -> data)
        {
            p -> right = temp;
        }
        else
        {
            p -> left = temp;
        }
    }
}


void InOrder_Traversal(struct node* temp)
{
    if (temp -> left)
    {
        InOrder_Traversal(temp -> left);
    }
    printf("%d -> ", temp -> data);
    if (temp -> right)
    {
        InOrder_Traversal(temp -> right);
    }

}

void PostOrder_Traversal(struct node* temp)
{
     if (temp -> left)
    {
        PostOrder_Traversal(temp -> left);
    }
    if (temp -> right)
    {
        PostOrder_Traversal(temp -> right);
    }
    printf("%d -> ", temp -> data);

}

void PreOrder_Traversal(struct node* temp)
{
    printf("%d -> ", temp -> data);
     if (temp -> left)
    {
        PreOrder_Traversal(temp -> left);
    }
    if (temp -> right)
    {
        PreOrder_Traversal(temp -> right);
    }

}

void Desc(int num)
{
    if (num == 1)
    {
        system("cls");
    }
    printf("\tEnter 1 to create %s \n\tEnter 2 to Inorder traversal\n\tEnter 3 to Postorder traversal\n\tEnter 4 to Postorder traversal\n", (root == NULL) ? "root node" : "parent and child nodes");

}


int main()
{
    int num;
    do
    {
        Desc(num);
        printf("enter a number: \n");
        scanf("%d", &num);
        switch (num)
        {
        case 1:
            adding_node();
            break;
        case 2:
            printf("\tIn-order traversal\n");
            InOrder_Traversal(root);
            printf("\n");
            break;
        case 3:
            printf("\tPost-order traversal\n");
            PostOrder_Traversal(root);
            printf("\n");
            break;
        case 4:
            printf("\tPre-order traversal\n");
            PreOrder_Traversal(root);
            printf("\n");
            break;
        }
    }while (num != 0);

    return 0;
}
*/


/*
///---AVL Tree---///
#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    int height;
    struct node* left;
    struct node* right;
};

struct node* root = NULL;

int height_func(struct node* temp)
{
    if (temp == NULL)
    {
        return 0;
    }
    return temp -> height;

}

int balancefactor(struct node* temp)
{
    if (temp == NULL)
    {
        return -1;
    }
    else
    {
        return height_func(temp -> left) - height_func(temp -> right);
    }

}

struct node* rightRotate(struct node* y)
{
    struct node* x = y -> left;
    struct node* t = x -> right;

    x -> right = y;
    y -> left = t;
    return x;
}

struct node* leftRotate(struct node* x)
{
    struct node* y = x -> right;
    struct node* t = y -> left;

    y -> left = x;
    x -> left = t;
    return y;
}

void rotation(struct node* temp)
{
    int bf;
    bf = balancefactor(temp);
    if ((bf > 1) && (temp -> data < root -> left -> data))
    {
        rightRotate(temp);
    }
    if ((bf < -1) && (temp -> data > root -> right -> data))
    {
        leftRotate(temp);
    }
    if ((bf > 1) && (temp -> data > root -> left -> data))
    {
        root -> left = leftRotate(temp);
        rightRotate(temp);
    }
    if ((bf < -1) && (temp -> data < root -> right -> data))
    {
        root -> right = rightRotate(temp);
        leftRotate(temp);
    }
}

void adding_node()
{
    struct node* temp, *p;
    temp = (struct node*)malloc(sizeof(struct node));
    printf("Enter a value for the %s: \n", (root == NULL) ? "root" : "node");
    scanf("%d", &temp -> data);
    temp -> left = NULL;
    temp -> right = NULL;
    p = root;
    if (root == NULL)
    {
        root = temp;
    }
    else{
        struct node* current;
        current = root;
        while (current)
        {
            p = current;
            if (temp -> data > current -> data)
            {
                current = current -> right;
            }
            else
            {
                current = current -> left;
            }
        }
        if (temp -> data > p -> data)
        {
            p -> right = temp;
        }
        else
        {
            p -> left = temp;
        }
        rotation(temp);
    }

}



int main()
{
    int num;
    do
    {
        printf("enter a number: ");
        scanf("%d", &num);
        switch (num)
        {
        case 1:
            adding_node();
//            rotation(root);
            printf("balance factor: %d\n", balancefactor(root));
            break;
//        case 2:
//
//            break;
//        case 3:
//
//            break;
//        case 4:
//
//            break;
        }
    }while (num != 0);

    return 0;
}

*/

///---- Binary tree without Dynamic Allocation ----///
/*
#include<stdio.h>
int arr[10];

void root()
{
    int key;
    printf("Enter root node: \n");
    scanf("%d", &key);
    if (arr[0] != 0)
    {
        printf("The tree already has a root.\n");
    }
    else
    {
        arr[0] = key;
    }
}

void leftNode(int parent)
{
    int key;
    printf("Enter the left node: \n");
    scanf("%d", &key);

    if (arr[parent] == 0)
    {
        printf("Cannot set the child %d, no parent found at %d", key, parent);
    }
    else
    {
        arr[(2 * parent) + 1] = key;
    }
}

void rightNode(int parent)
{
    int key;
    printf("Enter the right node: \n");
    scanf("%d", &key);

    if (arr[parent] == 0)
    {
        printf("Cannot set the child %d, no parent found at %d\n", key, parent);
    }
    else
    {
        arr[(2 * parent) + 2] = key;
    }

}

void display()
{
    for (int i = 0; i < 10; i++)
    {
        if (arr[i] != 0)
        {
            printf(" %d ", arr[i]);
        }
        else
        {
            printf(" - ");
        }
    }
}

int main()
{
  int num, a;;
  root();
  printf("Enter 1 to add left node.\nEnter 2 to add right node.\nEnter 3 to display the array.\n");
    do
    {
        printf("enter a number: \n");
        scanf("%d", &num);
        switch (num)
        {
        case 1:
            printf("enter the parent index of left node: ");
            scanf("%d", &a);
            leftNode(a);
            break;
        case 2:
            printf("enter the parent index of right node: ");
            scanf("%d", &a);
            rightNode(a);
            break;
        case 3:
            printf("Elements in the array are: ");
            display();
            printf("\n");
            break;
        }
    }while (num != 0);

    return 0;
}
*/
