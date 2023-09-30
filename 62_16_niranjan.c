/*Roll no: 62
  Batch: C
  Name: Niranjan Kumar Yadav
  Date:11/09/2023
  Description: progarmm id 16
*/

#include <stdio.h>

// strcture of a node of linked list
struct node
{
    struct node *next;
    int info;
};

// to create memory for a node
struct node *getnode()
{
    return ((struct node *)malloc(sizeof(struct node)));
}

// to delete a node
void freenode(struct node *p)
{
    free(p);
}

// initializing the linked lsit
struct node *list = NULL;



// to insert an element at end of linked list
void push(int x)
{
    if (list == NULL)
    {
        struct node *newnode;
        newnode = getnode();
        newnode->info = x;
        newnode->next = list;
        list = newnode;
    }

    struct node *nn, *temp;

    nn = getnode();
    nn->info = x;
    nn->next = NULL;
    temp = list;

    while (temp->next != NULL)
    {
        temp = temp->next;
    }

    temp->next = nn;
}


// to delete last node
void pop()
{
    if (list == NULL)
    {
        printf("Empty linked list");
    }

    if (list->next == NULL)
    {
        struct node *temp;
        temp = list;
        list = list->next;
        freenode(temp);
    }
    struct node *temp, *t2;
    temp = list;
    while (temp->next->next != NULL)
    {
        t2 = temp;
        temp = temp->next;
    }
    freenode(temp->next);
    temp->next = NULL;
}

// to display linked list
void display()
{
    if (list == NULL)
    {
        printf("Empty linked list");
        
    }

    struct node *temp;
    temp = list;
    while (temp->next != NULL)
    {
        printf("%d\n", temp->info);
        temp = temp->next;
    }
    printf("%d", temp->info);
}




/*start of main method*/
void main()
{
    int n, x;
    while (1)
    {

        printf("--linked list implemententaion in stack--");
        printf("\n1. Push");
        printf("\n2. Pop");
        printf("\n3. Traverse");
        printf("\n4. Exit");
        printf("\nenter the option no.: ");
        scanf("%d", &n);

        switch (n)
        {
        case 1:
            printf("enter the number you want to push into the list: ");
            scanf("%d", &x);
            push(x);
            break;

        case 2:
            pop();
            break;

        case 3:
            display();
            break;

        case 4:
            exit(1);

        default:
            printf("incorrect choice");
        } // end of switch
    }     // end of while

    printf("You got exit\n");
} // end of main method