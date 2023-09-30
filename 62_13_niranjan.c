/*roll no: 62
  batch: C
  name:Niranjan
  date:26/08/2023
  description:progarmm id 13
*/

#include <stdio.h>
#include <stdlib.h>

int queue[5];
int front, rear; // front is used to delete elements from front of the queue
                 // rear is used to insert elements from back of the queue

/*function prototype*/

void init();

/*enuque method is used to insert elements*/
void enqueue(int);

/*deque method is used to delete elements */
void dequeue();

/*display method to traverse all elements*/
void display();

/*start of main method*/

void main()
{
    int n, a;
    while (1)
    {
        printf("differnts opertaion in Queue:");
        printf("\n 1. insert elements in Queue");
        printf("\n 2. delete elements from Queue");
        printf("\n 3. traverse all elements");
        printf("\n 4. exit");

        printf("\n enter the option");
        scanf("%d", &n);

        switch (n)
        {
        case 1:
            printf("enter the elements to insert in queue");
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
            exit(1);

        default:
            printf("wrong option selected");
            break;
        } // end of switch
    }     // end of while
} // end of main method

/*initializing the default value of front and rear*/
void init()
{
    front = -1;
    rear = -1;
}

void enqueue(int a)
{
    if (front = (rear + 1) % 5)
    {
        printf("queue is full:");
    }
    else if (front == -1 && rear == -1)
    {
        front++, rear++;
        queue[rear] = a;
    }
    else
    {
        rear = (rear + 1) % 5;
        queue[rear] = a;
    }
}

void dequeue()
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

void display()
{
    if (front == -1)
    {
        printf("\nQueue is Empty");
        return;
    }

    printf("\nElements in Circular Queue are: ");
    if (rear >= front)
    {
        for (int i = front; i <= rear; i++)
            printf("%d ", queue[i]);
    }
    else
    {
        for (int i = front; i < 5; i++)
            printf("%d ", queue[i]);

        for (int i = 0; i <= rear; i++)
            printf("%d ", queue[i]);
    }
}
