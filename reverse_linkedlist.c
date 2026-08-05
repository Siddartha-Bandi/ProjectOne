#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *head = NULL;

// Count nodes
int count()
{
    int c = 0;
    struct node *temp = head;

    while (temp != NULL)
    {
        c++;
        temp = temp->next;
    }

    return c;
}

// Create a new node
struct node *create(int value)
{
    struct node *temp = (struct node *)malloc(sizeof(struct node));

    if (temp == NULL)
    {
        printf("Memory Allocation Failed!\n");
        exit(1);
    }

    temp->data = value;
    temp->next = NULL;

    return temp;
}

// Insert at beginning
void insert_begin(int value)
{
    struct node *newnode = create(value);

    newnode->next = head;
    head = newnode;
}

// Insert at end
void insert_end(int value)
{
    struct node *newnode = create(value);

    if (head == NULL)
    {
        head = newnode;
        return;
    }

    struct node *temp = head;

    while (temp->next != NULL)
        temp = temp->next;

    temp->next = newnode;
}

// Insert at position
void insert_pos(int value, int pos)
{
    int n = count();

    if (pos < 1 || pos > n + 1)
    {
        printf("Invalid Position!\n");
        return;
    }

    if (pos == 1)
    {
        insert_begin(value);
        return;
    }

    struct node *newnode = create(value);
    struct node *temp = head;

    for (int i = 1; i < pos - 1; i++)
        temp = temp->next;

    newnode->next = temp->next;
    temp->next = newnode;
}

// Delete beginning
void delete_begin()
{
    if (head == NULL)
    {
        printf("List is Empty!\n");
        return;
    }

    struct node *temp = head;
    head = head->next;
    free(temp);
}

// Delete end
void delete_end()
{
    if (head == NULL)
    {
        printf("List is Empty!\n");
        return;
    }

    if (head->next == NULL)
    {
        free(head);
        head = NULL;
        return;
    }

    struct node *temp = head;
    struct node *prev = NULL;

    while (temp->next != NULL)
    {
        prev = temp;
        temp = temp->next;
    }

    prev->next = NULL;
    free(temp);
}

// Delete at position
void delete_pos(int pos)
{
    int n = count();

    if (pos < 1 || pos > n)
    {
        printf("Invalid Position!\n");
        return;
    }

    if (pos == 1)
    {
        delete_begin();
        return;
    }

    struct node *temp = head;
    struct node *prev = NULL;

    for (int i = 1; i < pos; i++)
    {
        prev = temp;
        temp = temp->next;
    }

    prev->next = temp->next;
    free(temp);
}

// Display list
void display()
{
    if (head == NULL)
    {
        printf("List is Empty!\n");
        return ;
    }

    struct node *temp = head;

    printf("Linked List:\n");

    while (temp != NULL)
    {
        printf("%d", temp->data);

        if (temp->next != NULL)
            printf(" -> ");

        temp = temp->next;
    }

    printf("\n");
}

// Reverse display
void print_reverse_recursive(struct node *temp)
{
    if (temp == NULL)
        return;

    print_reverse_recursive(temp->next);
    printf("%d ", temp->data);
}

int main()
{
    int ch, value, pos;

    do
    {
        printf("\n");
        printf("1. Insert Beginning\n");
        printf("2. Insert End\n");
        printf("3. Insert Position\n");
        printf("4. Delete Beginning\n");
        printf("5. Delete End\n");
        printf("6. Delete Position\n");
        printf("7. Display\n");
        printf("8. Display Reverse\n");
        printf("10. Exit\n");

        printf("Enter Choice: ");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:
            printf("Enter Value: ");
            scanf("%d", &value);
            insert_begin(value);
            break;

        case 2:
            printf("Enter Value: ");
            scanf("%d", &value);
            insert_end(value);
            break;

        case 3:
            printf("Enter Value: ");
            scanf("%d", &value);
            printf("Enter Position: ");
            scanf("%d", &pos);
            insert_pos(value, pos);
            break;

        case 4:
            delete_begin();
            break;

        case 5:
            delete_end();
            break;

        case 6:
            printf("Enter Position: ");
            scanf("%d", &pos);
            delete_pos(pos);
            break;

        /*case 7:
            display();
            break;*/

        case 7:
            printf("Reverse Order:\n");
            print_reverse_recursive(head);
            printf("\n");
            break;

        case 8:
            while (head != NULL)
                delete_begin();

            printf("Program Exited.\n");
            break;

        default:
            printf("Invalid Choice!\n");
        }

    } while (ch != 8);

    return 0;
}