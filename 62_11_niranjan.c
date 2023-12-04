/*Roll no: 62
  Batch: C
  Name: Niranjan Kumar Yadav
  Date:26/08/2023
  Description: progarmm id 11
*/

#include <stdio.h>
#include <stdlib.h>

int stack[5];
int top = -1; // stack initialization condition

// Function prototypes

/* push method is used to insert elements into stack */
void push(int);

/* pop method is used to delete elements from stack */
void pop();

/* display method is used to traverse and print all the elements from the stack */
void display();

/* main method */
int main()
{
    int n; // used to store user choice
    int a;

    while (1)
    {
        printf("------different operations in stack------\n");
        printf("1. insert elements in stack\n");
        printf("2. delete elements from stack\n");
        printf("3. traverse all elements\n");
        printf("4. exit\n");

        printf("enter the option: ");
        scanf("%d", &n);
        switch (n)
        {
        case 1:
            printf("enter the element to insert into stack: ");
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
            exit(0);

        default:
            printf("wrong option selected\n");
            break;
        } // end of switch
    }     // end of while

    return 0;
}
/* end of main method */

/* push method */
void push(int a)
{
    if (top == 4)
    {
        printf("stack is full\n");
    }
    else
    {
        top++;
        stack[top] = a;
        display();
        printf("\n");
    }
}
/* end of push method */

/* pop method */
void pop()
{
    if (top == -1)
    {
        printf("stack is empty\n");
    }
    else
    {
        int e = stack[top];
        top--;
        printf("%d element popped out of the stack\n", e);
        display();
        printf("\n");
    }
}
/* end of pop method */

/* display method */
void display()
{
    if (top == -1)
    {
        printf("stack is empty\n");
    }
    else
    {
        for (int i = top; i >= 0; i--)
        {
            printf("%d\n", stack[i]);
        }
    }
}
/* end of display method */




           



