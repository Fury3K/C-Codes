#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Node;
void printMenu();
struct Node* createNode();
void assignNode(struct Node* newNode, char name[], char number[], char medicine[]);
void enQueue(struct Node** head, struct Node* newNode );
void enQueuePosition(struct Node** head, struct Node* newNode, int position);
void printList(struct Node* head);
void deQueue(struct Node **head);
