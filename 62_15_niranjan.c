/*Roll no: 62
  Batch: C
  Name: Niranjan Kumar Yadav
  Date:10/09/2023
  Description: progarmm id 15
*/


#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *head = NULL;

struct node *getnode(void)
{
    return ((struct node *)malloc(sizeof(struct node)));
}

void freenode(struct node *p)
{
    free(p);
}

void insert_at_beg(int v)
{
    struct node *nn = getnode();
    nn->data = v;
    nn->next = head;
    head = nn;
}

void insert_at_end(int v)
{
    struct node *nn = getnode();
    nn->data = v;
    nn->next = NULL;

    if (head == NULL)
    {
        head = nn;
    }
    else
    {
        struct node *temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = nn;
    }
}

void insert_at_location(int pi, int v)
{
    if (pi == 1)
    {
        insert_at_beg(v);
        return;
    }

    struct node *temp = head;
    for (int i = 1; i < pi - 1 && temp != NULL; i++)
    {
        temp = temp->next;
    }

    if (temp == NULL)
    {
        printf("Invalid position.\n");
    }
    else
    {
        struct node *nn = getnode();
        nn->data = v;
        nn->next = temp->next;
        temp->next = nn;
    }
}

void delete_at_beg()
{
    if (head == NULL)
    {
        printf("List is empty.\n");
        return;
    }

    struct node *temp = head;
    head = temp->next;
    freenode(temp);
}

void delete_at_end()
{
    if (head == NULL)
    {
        printf("List is empty.\n");
        return;
    }

    if (head->next == NULL)
    {
        delete_at_beg();
        return;
    }

    struct node *temp = head;
    struct node *t2 = NULL;

    while (temp->next->next != 0)
    {
        t2 = temp;
        temp = temp->next;
    }
    freenode(temp->next);
    temp->next = 0;
}

void delete_at_location(int m)
{
    if (head == 0)
    {
        printf("Empty linked lsit");
    }
    if (m == 1)
    {
        delete_at_beg();
    }
    struct node *temp, *t2;
    temp = head;
    for (int i = 1; i < m; i++)
    {
        t2 = temp;
        temp = temp->next;
    }
    t2->next = t2->next->next;
    freenode(temp);
}

void display()
{
    if (head == NULL)
    {
        printf("List is empty.\n");
        return;
    }

    struct node *temp = head;

    while (temp->next != 0)
    {
        printf("%d->", temp->data);
        temp = temp->next;
    }
    printf("%d", temp->data);
}

int main()
{
    int ch, n, pi;

    while (1)
    {
        printf("-----------Linked List Operations------------\n");
        printf("1. Insert at the beginning\n");
        printf("2. Insert at the end of the list\n");
        printf("3. Insert at any position in the list\n");
        printf("4. Delete at the beginning\n");
        printf("5. Delete at the end of the list\n");
        printf("6. Delete at any position in the list\n");
        printf("7. Traverse\n");
        printf("8. Exit\n");
        printf("Enter the option: ");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:
            printf("Enter the value: ");
            scanf("%d", &n);
            insert_at_beg(n);
            break;
        case 2:
            printf("Enter the value: ");
            scanf("%d", &n);
            insert_at_end(n);
            break;
        case 3:
            printf("Enter position and value: ");
            scanf("%d %d", &pi, &n);
            insert_at_location(pi, n);
            break;
        case 4:
            delete_at_beg();
            break;
        case 5:
            delete_at_end();
            break;
        case 6:
            printf("Enter position: ");
            scanf("%d", &pi);
            delete_at_location(pi);
            break;
        case 7:
            display();
            break;
        case 8:
            exit(0);
            break;
        default:
            printf("Invalid option selected.\n");
        }
    }
    return 0;
}

