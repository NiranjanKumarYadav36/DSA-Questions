/*roll no: 62
  batch: C
  name:Niranjan
  date:26/08/2023
  description:progarmm id 14
*/

#include <stdio.h>
#include <stdlib.h>

int queue[5];
int front, rear; // front is used to delete elements from front of the queue
                 // rear is used to insert elements from back of the queue

/*function prototype*/

void init();

/*enuque method is used to insert elements*/
void enqueue_at_rear(int);
void enqueue_at_front(int);

/*deque method is used to delete elements */
void dequeue_at_rear();
void dequeue_at_front();

/*start of main method*/
void main()
{
    int n, a;
    while (1)
    {
        printf("-----------differnts opertaion in double ended Queue:------------");
        printf("\n 1. insert elements at rear end of Queue");
        printf("\n 2. isnert elements from front end of Queue");
        printf("\n 3. delete elements at rear end of Queue");
        printf("\n 4. delete elements from front end of Queue");
        printf("\n 5. traverse elements");
        printf("\n6.exit");

        printf("\n enter the option");
        scanf("%d", &n);

        switch (n)
        {
        case 1:
            printf("enter the elements to insert in queue");
            scanf("%d", &a);
            enqueue_at_rear(a);
            break;

        case 2:
            printf("enter the elements to insert in queue");
            scanf("%d", &a);
            enqueue_at_front(a);
            break;

        case 3:
            dequeue_at_rear();
            break;

        case 4:
            dequeue_at_front();

        case 5:
            display();
            break;

        case 6:
            exit(1);
        default:
            printf("wrong option selected");
            break;
        } // end of switch
    }     // end of while
} // end of main method

void init()
{
    front = -1;
    rear = -1;
}

/*inserting elements at rear end*/
void enqueue_at_rear(int a)
{
    if ((front == 0 && rear == 4) || front == rear + 1)
    {
        printf("queue is full");
    }

    else if (front == -1 && rear == -1)
    {
        front++, rear++;
        queue[rear] = a;
    }
    else
    {
        rear = (rear + 1)%4;
        queue[rear] = a;
    }
}

/*inserting elements from front  end*/
void enqueue_at_front(int a)
{
    if ((front == 0 && rear == 4) || front == rear + 1)
    {
        printf("queue is full");
    }

    else if (front == 0)
    {
        front = 4;
        queue[front] = a;
    }
    else
    {
        front--;
        queue[front] = a;
    }
}

/*deleting elements at rear end*/
void dequeue_at_rear()
{
    if (front == -1 && rear == -1)
    {
        printf("queue is empty");
    }
    else if (front == rear)
    {
        front = rear = -1;
    }
    else if (rear == 0)
    {
        rear = 4;
    }
    else
    {
        rear--;
    }
}

/*deleting elements from front end*/
void dequeue_at_front()
{

    if (front == -1 && rear == -1)
    {
        printf("queue is empty");
    }
    else if (front == rear)
    {
        front = rear = -1;
    }
    else
    {
        front = (front + 1) % 5;
    }
}

/*diplay method*/
void display(int queue[5])
{
    if (front == -1)
    {
        printf("Queue is empty");
    }

    for (int i = front; i != rear; i = (i + 1) % 4)
    {
        printf("%d\n", queue[i]);
    }
    printf("%d", queue[rear]);
}