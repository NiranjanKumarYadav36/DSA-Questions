/*Roll no: 62
  Batch: C
  Name: Niranjan Kumar Yadav
  Date:11/09/2023
  Description: progarmm id 17
*/


#include<stdio.h>

//strcture of a node of LL
struct node
{
    struct node *next;
    int info;
};

//to create memory for a node
struct node* getnode()
{
    ((struct node*)malloc(sizeof(struct node)));
}

//to free a node
void freenode(struct node* p)
{
    free(p);
}

//initializing the linked list
struct node *list = NULL       ;



//to insert an element at end of LL
void enqueue(int x)
{
    if(list==NULL)
    {        
        struct node *newnode;
        newnode=getnode();
        newnode->info=x;
        newnode->next=list;
        list=newnode;
    }

    struct node *nn, *temp;
    nn= getnode();
    nn->info = x;
    nn->next =NULL;
    temp = list;
    
    while(temp->next!=NULL)
    {
        temp= temp->next;
    }
    temp->next = nn;

}


//to delete first node
void dequeue()
{
    if(list==NULL)
    {
        printf("Empty LL");
    }

    struct node *temp;
    temp =list;
    list = list->next;
    freenode(temp);

}



//to display linked list
void display()
{
    if(list==NULL)
    {
        printf("Empty linke list");
        
    }
    struct node *temp;
    temp=list;
    while(temp->next!=NULL)
    {
        printf("%d\n", temp->info);
        temp=temp->next;
    }
   
}

/*start of main method*/
void main()
{
    int n,x;
    while(1)
    {
        /*description of menu bar*/
        printf("--linked list implemententaion in stack--");
        printf("\n1. Enter in Queue");
        printf("\n2. Delete from Queue");
        printf("\n3. Traverse");
        printf("\n4. Exit");
        printf("\nenter the option no.: ");
        scanf("%d", &n);

        /*switch on entered choice*/
        switch(n)
        {
            case 1: 
                printf("enter the number you want to add in the Queue: ");
                scanf("%d", &x);
                enqueue(x);
                break;

            case 2:
                dequeue();
                break;

            case 3:
                display();
                break;

            case 4:
                exit(1);
                break;

            default:
                printf("incorrect choice");
        }//end of switch
    }//end of while

    printf("You got exit\n");
}//end of main method