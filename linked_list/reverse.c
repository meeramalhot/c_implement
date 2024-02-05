#include <stdio.h>
#include <stdlib.h>

//node struct
struct Node {
	int data;
	struct Node* next;
};

//reverse function
static void reverse(struct Node** head_ref) {
  //reverse pointers, while keeping nodes in place
    struct Node* prev = NULL;
    struct Node* current = *head_ref;
    struct Node* next = NULL;

    //while current is not null
    while (current) {
        //save the value of next
        next = current->next;
 
        //move the pointer to point to the previous, rather than the next
        current->next = prev;
 
        // move to the next node to reverse
        prev = current;
        current = next;
    }
    *head_ref = prev;
}


//function to push a node
void push(struct Node** head_ref, int new_data)
{
	struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
	new_node->data = new_data;
	new_node->next = (*head_ref);
	(*head_ref) = new_node;
}

//function to print a list of nodes
void printList(struct Node* head)
{
	struct Node* temp = head;
	while (temp != NULL) {
		printf("%d ", temp->data);
		temp = temp->next;
	}
}

int main()
{
//initialize empty list
	struct Node* head = NULL;

  int loop_limit = rand() % 10;

  for (int i = 0; i<loop_limit; i++) {
    int new_val = rand() % 10;
    push(&head, new_val);
  }

	printf("Given linked list\n");
	printList(head);
	reverse(&head);
	printf("\nReversed linked list \n");
	printList(head);
	getchar();
}
