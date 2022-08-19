#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>

struct list
{
    int data;
    struct list *next;
};
typedef struct list node;

node *sentinal = NULL;
node *head = NULL;
node *newnode = NULL;

node *temp = NULL;


int menu();
void createlist();
void display();
void insertbegin();

int main()
{

    int option;
    while (1)
    {
        option = menu();
        int n;
        switch (option)
        {
            case 1:
            {
                createlist();
                break;
            }
            case 2:
            {
                insertbegin();
                break;
            }
            case 3:
            {
                display();
                printf("go to the sentinal node");
                break;
            }
            case 4:
            {
                printf("\nExiting ...");
                exit(0);
            }
            default:
            {
                printf("\nInvalid choice\n");
            }
        }
    }
    free(head);
    free(newnode);
    free(sentinal);
    free(temp);
    free(temp);
    system("pause");
    return 0;
}


int menu()
{
    int option;
    printf("\n1. Create link list\n");
    printf("\n2. Insert a node at the beginning of the list\n");
    printf("\n3. Display the list\n");
    printf("\n4. Exit\n");
    printf("\nEnter option: ");
    scanf("%d", &option);
    return option;
}

void createlist()
{
    int choice=1;
    sentinal = (node *)malloc(sizeof(node));
    printf("\nMemory address for sentinal node: %d\n", sentinal);
    sentinal->data = -1;
    sentinal->next=NULL;
    printf("\nData of sentinal: %d\n", sentinal->data);

    while (choice)
    {
        newnode = (node *)malloc(sizeof(node));
        printf("\nMemory address: %d", newnode);
        printf("\nEnter data: ");
        scanf("%d", &newnode->data);
        newnode->next = NULL;
        if (head == NULL)
        {
            head = newnode;
        }
        else
        {
            temp = head;
            while (temp->next != NULL)

               temp = temp->next;

            temp->next = newnode;
        }
        printf("\nDo you wish to continue? If YES tupe 1, for no type 0\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
    }
    sentinal->next = head;
    newnode->next = sentinal;  //last node pointer
}

void display()
{

    temp = sentinal;
    printf("\nThe contents of list\n");
    if (sentinal == NULL)
    {
        printf("\nEmpty List");
    }
    else
    {
        do
        {
            printf("[%d][%d]---->", temp->data, temp->next);
            temp = temp->next;
        } while (temp != sentinal);

    }
}

void insertbegin()
{
    newnode = (node *)malloc(sizeof(node));
    printf("\nMemory address: %d", newnode);
    printf("\nEnter data: ");
    scanf("%d", &newnode->data);
    newnode->next = NULL;

        temp = head;
        while (temp->next != sentinal) {
            temp = temp->next;
        }
        newnode->next = head;
        head = newnode;
        sentinal->next = newnode;

    printf("\nNode inserted at beginning\n");
}
