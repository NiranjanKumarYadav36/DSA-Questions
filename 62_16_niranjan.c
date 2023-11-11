/*Roll no: 62
  Batch: C
  Name: Niranjan Kumar Yadav
  Date:11/09/2023
  Description: progarmm id 16
*/

#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *getnode(void)
{
    return ((struct node *)malloc(sizeof(struct node)));
}

void freenode(struct node *p)
{
    free(p);
}

struct node *head = NULL;

// Function to push an element to the end of the linked list
void push(int x)
{
    struct node *nn, *temp;

    nn = getnode();
    nn->data = x;
    nn->next = NULL;

    if (head == NULL)
    {
        head = nn;
    }
    else
    {
        temp = head;

        while (temp->next != NULL)
        {
            temp = temp->next;
        }

        temp->next = nn;
    }
}


// Function to pop an element from the end of the linked list
void pop()
{
    if (head == NULL)
    {
        printf("List is empty.\n");
        return;
    }

    if (head->next == NULL)
    {
        // Only one element in the list
        struct node *temp = head;
        printf("Popped element: %d\n", temp->data);
        head = temp->next;
        freenode(temp);
        return;
    }

    struct node *temp = head;
    struct node *t2 = NULL;

    while (temp->next != NULL)
    {
        t2 = temp;
        temp = temp->next;
    }

    printf("Popped element: %d\n", temp->data);
    freenode(temp);
    t2->next = NULL;
}

// Function to display the linked list elements
void display()
{
    if (head == NULL)
    {
        printf("List is empty.\n");
        return;
    }

    struct node *temp = head;
    printf("Linked list elements:\n");
    while (temp != NULL)
    {
        printf("%d\n", temp->data);
        temp = temp->next;
    }
}

// Main function to demonstrate linked list operations
int main()
{
    int ch, n;

    while (1)
    {
        printf("-----------Linked List Operations------------\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Traverse\n");
        printf("4. Exit\n");
        printf("Enter the option: ");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:
            printf("Enter the value: ");
            scanf("%d", &n);
            push(n);
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
        default:
            printf("Invalid option selected.\n");
        }
    }

    return 0;
}
