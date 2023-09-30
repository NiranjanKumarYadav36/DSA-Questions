/*Roll no: 62
  Batch: C
  Name: Niranjan Kumar Yadav
  Date:10/09/2023
  Description: progarmm id 15
*/


#include <stdio.h>

struct node
{
    int info;
    struct node *next;
};
int p;

struct node *list = 0;

//function of creating new node
struct node *getnode(void)
{
    return ((struct node *)malloc(sizeof(struct node)));
}

//function of deleting node
void freenode(struct node *p)
{
    free(p);
}

// start of main method
void main()
{
    int x;
    int n;
    while (1)
    {

        printf("-----------linked list operation------------");
        printf("\nenter\n");
        printf("1. insert at begining\n");
        printf("2. insert at end of the list\n");
        printf("3. insert at any position in the list\n");
        printf("4. delete at begining\n");
        printf("5. delete at end of the list\n");
        printf("6. delete at any position in the list\n");
        printf("7. traverse\n");
        printf("8:exit");
        scanf(" %d", &n);
        switch (n)
        {
        case 1:

            printf("enter the number:");
            scanf("%d", &x);
            insert_at_beg(x);
            break;

        case 2:
            printf("enter the number:");
            scanf("%d", &x);
            insert_at_end(x);
            break;

        case 3:
            int pi;
            printf("enter the position and value respectively at which list to be added:");
            scanf("%d,%d", &pi, &x);
            insert_at_location(pi, x);
            break;

        case 4:
            delete_at_Beg();
            break;

        case 5:
            delete_at_end();
            break;                

        case 6:
            int m;
            printf("enter the position at which to be deleted in linked list: ");
            scanf("%d", &m);
            delete_at_loctaion(m);
            break;

        case 7:
            display();
            break;

        case 8:
            exit(1);

        default:
            printf("wrong option selected:");
            break;
        } //end of switch
    }// end of while loop
}//end of main 


/*start of insertion function at begining*/
void insert_at_beg(int x)
{
    struct node *newnode;
    newnode = getnode();
    newnode->info = x;
    newnode->next = list;
    list = newnode;
}
/*end of insertion function at begining*/


/*start of insertion function at end of list*/
void insert_at_end(int x)
{
    if (list == 0)
    {
        insert_at_beg(x);
    }

    else
    {
        struct node *newnode, *temp;
        newnode = getnode();
        newnode->info = x;
        newnode->next = 0;

        temp = list;

        while (temp->next != 0)
        {
            temp = temp->next;
        }

        temp->next = newnode;
    }
}
/*end of insertion function at end of list*/


/*start of insertion function at any postion in list*/
void insert_at_location(int pi, int x)
{
    struct node *newnode, *temp;

    if (list == 0 || pi == 1)
    {
        insert_at_beg(x);
    }
    else
    {
        temp = list;
        for (int i = 1; i < pi - 1; i++)
        {
            temp = temp->next;
        }

        newnode = getnode();
        newnode->info = x;
        newnode->next = temp->next;
        temp->next = newnode;
    }
}
/*end of insertion function at any postion in list*/


/*start of delete function at begining in list*/
void delete_at_Beg()
{
    if (list == 0)
    {
        printf("Empty list:");
    }
    else
    {
    struct node *temp;
    temp = list;
    list = list->next;
    freenode(temp);
    }
}
/*end of delete function at begining in list*/


/*start of delete function at any location list*/
void delete_at_loctaion(int m)
{
    if(list==0)
    {
        printf("Empty linked lsit");
        
    }
    if(m==1)
    {
        delete_at_Beg();
    }
    struct node *temp, *t2;
    temp =list;
    for(int i=1; i<m; i++)
    {
        t2 = temp;
        temp= temp->next;
    }
    t2->next=t2->next->next;
    freenode(temp);
}
/*end of delete function at any location in list*/


/*start of delete function at end of list*/
void delete_at_end()
{
    if(list==0)
    {
        printf("Empty LL");
    }
    if(list->next==0)
    {
        delete_at_Beg();      
    }
    struct node *temp, *t2;
    temp=list;
    while(temp->next->next!=0)
    {
        t2=temp;
        temp =temp->next;
    }
    freenode(temp->next);
    temp->next=0;
}
/*end of delete function at end of list*/


/*start of dispaly function */
void display()
{
    if(list==0)
    {
        printf("Empty linke list");
    }
    struct node *temp;
    temp=list;
    while(temp->next!=0)
    {
        printf("%d\n", temp->info);
        temp=temp->next;
    }
    printf("%d", temp->info);
}
/*end of delete function*/
