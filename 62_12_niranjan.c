/*roll no: 62
  batch: C
  name:Niranjan
  date:26/08/2023
  description:progarmm id 12
*/

#include <stdio.h>
#include <stdlib.h>

int queue[5];
int front, rear; // front is used to delete elements from the front of the queue
                 // rear is used to insert elements from the back of the queue

/* function prototype */

void init();

/* enqueue method is used to insert elements */
void enqueue(int);

/* dequeue method is used to delete elements */
void dequeue();

/* display method to traverse all elements */
void display();

/* start of main method */
int main()
{
    int n, a;
    init(); // initialize front and rear
    while (1)
    {
        printf("different operations in Queue:\n");
        printf("1. insert elements in Queue\n");
        printf("2. delete elements from Queue\n");
        printf("3. traverse all elements\n");
        printf("4. exit\n");

        printf("enter the option: ");
        scanf("%d", &n);

        switch (n)
        {
        case 1:
            printf("enter the element to insert in queue: ");
            scanf("%d", &a);
            enqueue(a);
            break;

        case 2:
            dequeue();
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
} // end of main method

/* initializing the default value of front and rear */
void init()
{
    front = -1;
    rear = -1;
}

/* enqueue method */
void enqueue(int a)
{
    if (rear == 4)
    {
        printf("queue is full\n");
    }
    else if (front == -1 && rear == -1)
    {
        front++;
        rear++;
        queue[rear] = a;
    }
    else
    {
        rear++;
        queue[rear] = a;
    }
}
/* end of enqueue method */

/* dequeue method */
void dequeue()
{
    if (front == -1 && rear == -1)
    {
        printf("queue is empty\n");
    }
    else if (front == rear)
    {
        printf("deleted element is: %d\n", queue[front]);
        front = rear = -1;
    }
    else
    {
        printf("deleted element is: %d\n", queue[front]);
        front++;
    }
}
/* end of dequeue method */

/* display method */
void display()
{
    if (front == -1 && rear == -1)
    {
        printf("queue is empty\n");
    }
    else
    {
        for (int i = front; i <= rear; i++)
        {
            printf("element is %d\n", queue[i]);
        }
    }
}
/* end of display method */
