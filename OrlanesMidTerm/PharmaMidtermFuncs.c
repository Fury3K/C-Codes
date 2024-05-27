#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "PharmaMidtermHeader.h"

struct Node{
    char nameData[50], numberData[20], medicineData[50];

    struct Node* next;
};

void printMenu()
{
    printf("\nMIDTERM PHARMACY CODE\n");
    printf("1. Add Prescription \n");
    printf("2. Browse Patients \n");
    printf("3. Exit \n");
}
struct Node* createNode()
{
    struct Node *new;
    new = malloc(sizeof(struct Node));
    return new;
}

void assignNode(struct Node* newNode, char name[], char number[], char medicine[])
{
    strcpy(newNode -> nameData, name);
    strcpy(newNode -> numberData, number);
    strcpy(newNode -> medicineData, medicine);
    newNode -> next = NULL;

}

void enQueue(struct Node** head, struct Node* newNode )
{
    struct Node *ptr;
    ptr = (struct Node*)malloc(sizeof(struct Node));
    ptr = *head;
    if(*head == NULL)
    {
        newNode -> next = *head;
        *head = newNode;
    }
    else
    {
        newNode -> next = NULL;
        while(ptr->next != NULL)
            ptr = ptr -> next;
        ptr -> next = newNode;
    }
}

void enQueuePosition(struct Node** head, struct Node* newNode, int position)
{
    struct Node* ptr;
    ptr = *head;

    if(position < 1 || position > 5)
    {
        printf("Invalid Position Number!");
    }
    else if(position == 1)
    {
        newNode -> next = *head;
        *head = newNode;
    }
    else
    {
        position--;
        while(position != 1)
        {
            ptr = ptr -> next;
            position--;
        }
        if(ptr -> next = NULL)
        {
            printf("The next node cannot be NULL! Please use standard queue!");
        }
        
        newNode -> next = ptr -> next;
        ptr -> next = newNode;
    }
    

}



void printList(struct Node* head) {
    struct Node* p;
    int count = 1;
    for (p = head; p; p = p->next) {
        printf("%d.) ", count);
        count++;
        printf("%s\t\t|\t %s|\t %s", p -> nameData, p -> numberData, p -> medicineData);
        printf("\n");
    }
    if(head == NULL)
    {
        printf("\nYour list is currently empty!");
    }
    printf("\n");
}

void deQueue(struct Node **head)
{
    struct Node *ptr;
    ptr = (struct Node*)malloc(sizeof(struct Node));
    ptr = *head;
    if(*head == NULL)
    {
        printf("The list is empty!\n");
    }
    *head = ptr -> next;
    free(ptr);
    ptr = *head;

}