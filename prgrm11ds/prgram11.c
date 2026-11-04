#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *newnode, *temp, *head = NULL;

void insert()
{
    newnode = (struct node *)malloc(sizeof(struct node));

    printf("Enter the data: ");
    scanf("%d", &newnode->data);

    if (head == NULL)
    {
        head = newnode;
        head->next = NULL;
    }
    else
    {
        newnode->next = head;
        head = newnode;
    }
}

void delete()
{
    if (head == NULL)
    {
        printf("List is empty.\n");
    }
    else
    {
        temp = head;
        head = head->next;
        printf("Deleted element is %d\n", temp->data);
        free(temp);
    }
}

void search()
{
    struct node *temp;
    int flag = 0, data, count = 1;

    printf("Enter the data to be searched: ");
    scanf("%d", &data);

    if (head == NULL)
    {
        printf("List is empty.\n");
        return;
    }
    else
    {
        temp = head;

        while (temp != NULL)
        {
            if (data == temp->data)
            {
                flag = 1;
                break;
            }

            temp = temp->next;
            count++;
        }

        if (flag == 1)
            printf("The data %d is found at position %d\n", data, count);
        else
            printf("The data %d is not found.\n", data);
    }
}

void display()
{
    struct node *temp;

    temp = head;

    if (head == NULL)
    {
        printf("List is empty.\n");
    }
    else
    {
        printf("Linked list elements are: ");

        while (temp != NULL)
        {
            printf("%d " , temp->data);
            temp = temp->next;
        }

    }
}

int main()
{
    int opt;

    do
    {
        printf("\n1. Insert\n");
        printf("2. Deletion\n");
        printf("3. Display\n");
        printf("4. Search the data\n");
        printf("5. Exit\n");

        printf("Choose an option: ");
        scanf("%d", &opt);

        switch (opt)
        {
            case 1:
                insert();
                break;

            case 2:
                delete();
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
                printf("Invalid option.\n");
        }

    } while (opt != 0);

    return 0;
}
