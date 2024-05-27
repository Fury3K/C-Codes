#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


struct node{
    int num;
    struct node *next;
};


struct node *createNode(){
    struct node *new;
    new = malloc(sizeof(struct node));
    return new;
};

void assignNode(struct node *new, int num, int place){
    new->num = num;
    new->location = place;
    new->next = NULL;
}

void mainMenu(){
    printf("[1]Create List");
    printf("\n[2]Display List");
    printf("\n[3]Binary Search");
    printf("\n[4]Linear Search");
    printf("\n[5]Exit");
}

void displayList(struct node *new){
    while (new != NULL){
        printf("%d\n", new->num);
        new = new -> next;
    }
    printf("\n");
}

void insertEnd(struct node *new, struct node **head, struct node **tail){
    if(*head == NULL)
    {
       new->next = *head;
       *head = new;
       *tail = new;
    }
    else{
    new->next = (*tail)->next;
    (*tail)->next = new;
    *tail = new;
    }
}

void insertBrickSorting(struct node *new, struct node **head, struct node **tail){
    struct node *current, *temp;
	bool swapped;
	int i;
	do
	{
		swapped = false;
		current = *head;
		temp = *tail;
        int datatemp;
		
		for(i = 0; i <= 10; i = i+1)
		{
			while(current->next != NULL)
			{
				if(i % 2 == 0)
				{
					if(current->num > current->next->num)
					{
						datatemp = current->num;
                        current->num = current->next->num;
                        current->next->num = datatemp;
						swapped = true;
					}
				}
				else if(i % 2 == 1)
				{
					if(current->num > current->next->num)
					{
						datatemp = current->num;
                        current->num = current->next->num;
                        current->next->num = datatemp;
						swapped = true;
					}
				}
				current = current->next;
			}
		}
	}while(swapped);
}

struct node *middle(struct node *head, struct node *tail){

    if(head == NULL)
        return NULL;

    struct node* ptr = head;
    struct node* ptr2 = head->next;

    while(ptr2 != tail)
    {
        ptr2 = ptr2->next;
        if (ptr2 != tail)
        {
            ptr = ptr->next;
            ptr2 = ptr2->next;
        }
    }
    return ptr;
}

struct node* binarySearch(struct node **head, int searchValue)
{
    struct node* start;
    start = *head;
    struct node* last = NULL;

    do
    {
        // Find middle
        struct node* mid = middle(start, last);
 
        // If middle is empty
        if (mid == NULL)
            return NULL;
 
        // If value is present at middle
        if (mid -> num == searchValue)
            return mid;
 
        // If value is more than mid
        else if (mid -> num < searchValue)
            start = mid -> next;
 
        // If the value is less than mid.
        else
            last = mid;
 
    } while (last == NULL || last != start);
 
    // value not present
    return NULL;
}

bool search(struct node* head, int x)
{
    struct node* current = head;  // Initialize current
    while (current != NULL)
    {
        if (current->num == x)
            return true;
        current = current->next;
    }
    return false;
}

int main(){
    int choice,c,number,randomNum, numberSearchBinary, numberSearchLinear;
    struct node *head =NULL, *tail = NULL, *new;
    while(1){
        system("cls");
        mainMenu();
        printf("\nChoice: ");
        scanf("%d", &choice);
        if(choice == 1)
        {
            system("cls");
            time_t t;
	        srand((unsigned) time(&t));
            for(c = 1; c <= 10; c++){
                new=createNode();//creates empty node
                randomNum = rand()%101; //assigns random value to n
                assignNode(new, randomNum); //places random value to the node
                insertEnd(new, &head,&tail); //inserts the node to the end
            }
            insertBrickSorting(new,&head,&tail);
        }
        else if(choice == 2)
        {
            system("cls");
            displayList(head); 
            system("pause");
        }
        else if(choice == 3)
        {
           system("cls");
           printf("Enter number to find: ");
           scanf("%d", &numberSearchBinary);
           if(binarySearch(&head, numberSearchBinary) != NULL){
           printf("\npresent");
           }
           else
           {
           printf("\nNot found");
           }
           system("pause");
        }
         else if(choice == 4)
        {
            system("cls");
            printf("Enter number to find: ");
           scanf("%d", &numberSearchLinear);
           if(binarySearch(&head, numberSearchLinear) != NULL){
           printf("\npresent in %d" );
           }
           else
           {
           printf("\nNot found");
           }
           system("pause");
        }
         else if(choice == 5)
        {
            break;
        }
    }
    return 0;
}