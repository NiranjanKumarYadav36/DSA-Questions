/*Roll no: 62
  Batch: C
  Name: Niranjan Kumar Yadav
  Date:26/08/2023
  Description: progarmm id 12
*/

#include <stdio.h>
#include <stdlib.h>

int stack[5];
int top = -1; // stack initialization condition

// Function prototype

/*push method is use to insert elements into satck */
void push(int);

/*pop method is used to delete elemenst from stack*/
void pop();

/*dispaly method is used to traverse and print all the elements from the stack*/
void display();

/*main method*/
void main()
{
    int n; // used to store user choice
    int a;

    while (1)
    {
        printf("differnts opertaion in stack:");
        printf("\n 1. insert elemenst in stack");
        printf("\n 2. delete elemenst from stack");
        printf("\n 3. traverse all elemenst");
        printf("\n 4. exit");

        printf("\n enter the option");
        scanf("%d", &n);
        switch (n)
        {
        case 1:
            printf("eneter the elements to insert into stack:");
            scanf("%d", &a);
            push(a);
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
            printf("wrong option selcted");
            break;
        } // end of switch
    }     // end of while
}
/*end of main method*/

/*push method*/
void push(int a)
{
    if (top == 4)
    {
        printf("stack is full");
    }
    else
    {
        top++;
        stack[top] = a;
    }
}
/*end of push method*/

/*pop method*/

void pop()
{
    if (top == -1)
    {
        printf("stack is empty");
    }

    else
    {
        int e = stack[top];
        top--;
        printf("/n %d element popped out of the satck", e);
    }
}
/*end of pop method*/

/*dispaly method*/

void display()

{
    if (top == -1)
    {
        printf("satck is empty");
    }
    else
    {
        for (int i = top; i >= 0; i--)
        {
            printf("%d", stack[top]);
        }
    }
}
/*end of display method*/