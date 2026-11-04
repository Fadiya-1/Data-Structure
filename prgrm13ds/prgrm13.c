#include <stdio.h>
#include <stdlib.h>

#define N 5

int queue[N];
int rear = -1, front = -1;

void enqueue()
{
    int val;

    printf("Enter the data: ");
    scanf("%d", &val);

    if((rear + 1) % N == front)
    {
        printf("Queue is overflow\n");
        return;
    }

    if(rear == -1 && front == -1)
    {
        rear = front = 0;
        queue[rear] = val;
    }
    else
    {
        rear = (rear + 1) % N;
        queue[rear] = val;
    }
}

void dequeue()
{
    if(rear == -1 && front == -1)
    {
        printf("Queue is underflow\n");
        return;
    }

    printf("Deleted item is %d\n", queue[front]);

    if(rear == front)
    {
        rear = front = -1;
    }
    else
    {
        front = (front + 1) % N;
    }
}

void search()
{
    int data, flag = 0, count = 1, i;

    if(rear == -1 && front == -1)
    {
        printf("Queue is underflow\n");
        return;
    }

    printf("Enter the data: ");
    scanf("%d", &data);

    i = front;

    while(1)
    {
        if(data == queue[i])
        {
            flag = 1;
            break;
        }

        if(i == rear)
            break;

        i = (i + 1) % N;
        count++;
    }

    if(flag == 1)
        printf("The element is found at %d position", count);
    else
        printf("Element is not found");
}

void display()
{
    int i = front;

    if(rear == -1 && front == -1)
    {
        printf("Queue is underflow\n");
        return;
    }

    while(i != rear)
    {
        printf("%d ", queue[i]);
        i = (i + 1) % N;
    }

    printf("%d\n", queue[rear]);
}

int main()
{
    int opt;

    do
    {
        printf("\n1. Enqueue\n");
        printf("2. Dequeue\n");
        printf("3. Display\n");
        printf("4. Search\n");
        printf("5. Exit\n");

        printf("Enter the option: ");
        scanf("%d", &opt);

        switch(opt)
        {
            case 1:
                enqueue();
                break;

            case 2:
                dequeue();
                break;

            case 3:
                display();
                break;

            case 4:
                search();
                break;

            case 5:
                exit(0);

            default:
                printf("Invalid option\n");
        }

    } while(1);

    return 0;
}
