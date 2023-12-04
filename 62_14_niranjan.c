/*roll no: 62
  batch: C
  name:Niranjan
  date:26/08/2023
  description:progarmm id 14
*/

#include <stdio.h>
#include <stdlib.h>

int queue[5];
int front, rear; // front is used to delete elements from the front of the queue
                 // rear is used to insert elements from the back of the queue

/* function prototypes */

void init();
void enqueue_at_rear(int);
void enqueue_at_front(int);
void dequeue_at_rear();
void dequeue_at_front();
void display();

/* start of main method */
int main()
{
    int n, a;
    init(); // initialize front and rear
    while (1)
    {
        printf("-----------different operations in double-ended Queue:------------\n");
        printf("1. insert elements at rear end of Queue\n");
        printf("2. insert elements from front end of Queue\n");
        printf("3. delete elements at rear end of Queue\n");
        printf("4. delete elements from front end of Queue\n");
        printf("5. traverse elements\n");
        printf("6. exit\n");

        printf("Enter the option: ");
        scanf("%d", &n);

        switch (n)
        {
        case 1:
            printf("Enter the element to insert at the rear end: ");
            scanf("%d", &a);
            enqueue_at_rear(a);
            break;

        case 2:
            printf("Enter the element to insert at the front end: ");
            scanf("%d", &a);
            enqueue_at_front(a);
            break;

        case 3:
            dequeue_at_rear();
            break;

        case 4:
            dequeue_at_front();
            break;

        case 5:
            display();
            break;

        case 6:
            exit(0);

        default:
            printf("Wrong option selected\n");
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

/* inserting elements at rear end */
void enqueue_at_rear(int a)
{
    if ((front == 0 && rear == 4) || front == rear + 1)
    {
        printf("Queue is full\n");
    }
    else if (front == -1 && rear == -1)
    {
        front++, rear++;
        queue[rear] = a;
        printf("\n");
        display();
        printf("\n");
    }
    else
    {
        rear = (rear + 1) % 5;
        queue[rear] = a;
        printf("\n");
        display();
        printf("\n");
    }
}

/* inserting elements from front end */
void enqueue_at_front(int a)
{
    if ((front == 0 && rear == 4) || front == rear + 1)
    {
        printf("Queue is full\n");
    }
    else if (front == 0)
    {
        front = 4;
        queue[front] = a;
        printf("\n");
        display();
        printf("\n");
    }
    else
    {
        front = (front - 1 + 5) % 5;
        queue[front] = a;
        printf("\n");
        display();
        printf("\n");
    }
}

/* deleting elements at rear end */
void dequeue_at_rear()
{
    if (front == -1 && rear == -1)
    {
        printf("Queue is empty\n");
    }
    else if (front == rear)
    {
        front = rear = -1;
        printf("\n");
        display();
        printf("\n");
    }
    else if (rear == 0)
    {
        rear = 4;
        printf("\n");
        display();
        printf("\n");
    }
    else
    {
        rear = (rear - 1 + 5) % 5;
        printf("\n");
        display();
        printf("\n");
    }
}

/* deleting elements from front end */
void dequeue_at_front()
{
    if (front == -1 && rear == -1)
    {
        printf("Queue is empty\n");
    }
    else if (front == rear)
    {
        front = rear = -1;
        printf("\n");
        display();
        printf("\n");
    }
    else
    {
        front = (front + 1) % 5;
        printf("\n");
        display();
        printf("\n");
    }
}

/* display method */
void display()
{
    if (front == -1 && rear == -1)
    {
        printf("Queue is empty\n");
    }
    else
    {
        int i = front;
        do
        {
            printf("%d\n", queue[i]);
            i = (i + 1) % 5;
        } while (i != (rear + 1) % 5);
    }
}
