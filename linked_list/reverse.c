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
  struct Node *prev = NULL, *cur=head_ref, *tmp;
    //while current is not null
    while(cur){
      //find the value of next and store it
      tmp = cur->next;
      // shift pointer backwards
      cur->next = prev;
      //move forward to reverse the next nodes
      prev = cur;
      cur = tmp;
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
