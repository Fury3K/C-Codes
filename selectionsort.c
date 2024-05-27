#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Node{
    int numberData;
    struct Node* next;

};

    struct Node* sorted = NULL;

void printMenu()
{
    printf("STACK PHONEBOOK\n");
    printf("1. Append \n");
    printf("2. UNSORTED BROWSE \n");
    printf("3. Delete \n");
    printf("4. Bubble Sort \n");
    printf("5. Exit \n");
}
struct Node* createNode()
{
    struct Node *new;
    new = malloc(sizeof(struct Node));
    return new;
}

void assignNode(struct Node* newNode, int number)
{
    newNode -> numberData = number;
    newNode -> next = NULL;

}

void pushStack(struct Node** head, struct Node* newNode )
{
    newNode -> next = *head;
    *head = newNode;
}


void printList(struct Node* head)
{
    while (head != NULL)
    {
        printf("%d\n", head->numberData);
        head = head -> next;
    }
    printf("\n");
}

void popStack(struct Node **head, int position)
{
    struct Node *ptr;
    struct Node *ptr2;
    ptr = (struct Node*)malloc(sizeof(struct Node));
    ptr2 = (struct Node*)malloc(sizeof(struct Node));
    ptr = *head;
    ptr2 = *head;
    if(head == NULL)
    {
        printf("The list is currently empty!");
    }
    while(position != 0)
    {
        *head = ptr -> next;
        free(ptr);
        ptr = *head;
        position--;
    }
}

void selectionSort(struct Node* head)
{
    struct Node* temp = head;
 
    // Traverse the List
    while (temp) 
    {
        struct Node* min = temp;
        struct Node* r = temp->next;
 
        // Traverse the unsorted sublist
        while (r)
        {
            if (min->numberData > r->numberData)
                min = r;
 
            r = r->next;
        }
 
        // Swap Data
        int x = temp->numberData;
        temp->numberData = min->numberData;
        min->numberData = x;
        temp = temp->next;
    }
}



int main(){
    int choice, position, changeChoice, number;
    char appendChoice;
    struct Node *newNode;
    struct Node *head = NULL;
    while(1)
    {
        
        printMenu();
        printf("\n Your choice: ");
        scanf("%d", &choice);
    
        if(choice == 1)
        {
            printf("Enter your Number:  ");
            scanf("%d", &number);
            newNode = createNode();
            assignNode(newNode, number);
            pushStack(&head, newNode);
        }

        else if(choice == 2)
        {
            printList(head);
        }

        else if(choice == 3)
        {
            printf("Which position would you like to delete?:   ");
            scanf("%d", &position);
            popStack(&head, position);
        }

        else if(choice == 4)
        {
           printf("\n Linked list before sorting \n");
           printList(head);
           selectionSort(head);
           printf("\n Linked list after sorting \n");
           printList(head);   
        }

        else if(choice == 5)
        {
            printf("Thank you for using! Goodbye!");
            break;
        }

    }
    return 0;
}