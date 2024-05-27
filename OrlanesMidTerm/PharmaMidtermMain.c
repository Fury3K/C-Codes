#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "PharmaMidtermHeader.h"

int main(){
    int choice, position, changeChoice, qCount = 0;
    char name[50],number[20], medicine[20], appendChoice, urgencyChoice, queueCount = 0;
    struct Node *newNode;
    struct Node *head = NULL;
    while(1)
    {
        
        printMenu();
        printf("\n Your choice: ");
        scanf("%d", &choice);
    
        if(choice == 1)
        {
            printf("Please select urgency! \n");
            printf("1. Very Urgent");
            printf("\n2. Standard");
            printf("\nChoice: ");
            scanf("%d", &urgencyChoice);

            if(urgencyChoice == 1)
            {
                if(qCount >= 5)
                {
                   deQueue(&head);   
                   qCount--;
                }
                printf("Enter your Name:    ");
                scanf(" %[^\n]s", name);
                printf("Enter your Number:  ");
                scanf(" %[^\n]s", number);
                printf("Enter your desired prescription:    ");
                scanf(" %[^\n]s", medicine);
                printf("Enter the position you want:    ");
                scanf("%d", &position);
                newNode = createNode();
                assignNode(newNode, name, number, medicine);
                enQueuePosition(&head, newNode, position);
                qCount++;
            }
            if(urgencyChoice == 2)
            {
                if(qCount >= 5)
                {
                   deQueue(&head);   
                   qCount--;
                }
                printf("Enter your Name:    ");
                scanf(" %[^\n]s", name);
                printf("Enter your Number:  ");
                scanf(" %[^\n]s", number);
                printf("Enter your desired prescription:    ");
                scanf(" %[^\n]s", medicine);
                newNode = createNode();
                assignNode(newNode, name, number, medicine);
                enQueue(&head, newNode);
                qCount++;
            }



        }

        else if(choice == 2)
        {
            printList(head);
        }

        else if(choice == 3)
        {
            printf("Thank you for using! Goodbye!");
            break;
        }

    }
    return 0;
}
