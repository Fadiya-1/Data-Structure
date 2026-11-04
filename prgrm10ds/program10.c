#include <stdio.h>
#include <stdlib.h>

#define SIZE 5

int TOP = -1;
int array[SIZE];

void push();
void pop();
void show();

int main()
{
    int choice;

    while (1)
    {
        printf("\n\nOperations Performed by Stack");
        printf("\n1. Push the element");
        printf("\n2. Pop the element");
        printf("\n3. Show the elements");
        printf("\n4. Exit");

        printf("\n\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                push();
                break;

            case 2:
                pop();
                break;

            case 3:
                show();
                break;

            case 4:
                exit(0);

            default:
                printf("\nInvalid choice!");
        }
    }

    return 0;
}

void push()
{
    int x;

    if (TOP == SIZE - 1)
    {
        printf("\nSTACK FULL!");
    }
    else
    {
        printf("\nEnter the element to be inserted: ");
        scanf("%d", &x);

        TOP++;
        array[TOP] = x;

        printf("\nElement pushed successfully.");
    }
}

void pop()
{
    if (TOP == -1)
    {
        printf("\nSTACK EMPTY!");
    }
    else
    {
        printf("\nPopped element: %d", array[TOP]);
        TOP--;
    }
}

void show()
{
    int i;

    if (TOP == -1)
    {
        printf("\nSTACK EMPTY!");
    }
    else
    {
        printf("\nElements present in the stack:\n");

        for (i = TOP; i >= 0; i--)
        {
            printf("%d\n", array[i]);
        }
    }
}

