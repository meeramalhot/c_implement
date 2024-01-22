#include <stdio.h>
#include <stdlib.h>

//creating and displaying a linked list
typedef struct node{
  int data;
  struct node * next;
}node;

// function to create the linked list
node * createLinkedList(int n);
//function to display list
void displayList(node * head);
//function to sum up list
void displaySum(node * head);

int main() {
  int number = 0;
  node * HEAD = NULL;
  printf("\nHow many nodes in the list?\t");
  scanf("%d", &number);
  
  HEAD = createLinkedList(number);
  displayList(HEAD);
  displaySum(HEAD);
}

node * createLinkedList(int n){
  int i = 0;
  node * head = NULL;
  node * temp = NULL;
  node * point = NULL;

  for(i=0; i<n; i++){
    //creating space for an unlinked singular node

    temp = (node*)malloc(sizeof(node));
    // i + 1 bc we are not starting count from 0
    printf("\nEnter the data for the node number %d:\t", i+1);
    //accessing the data point associated w the temp node
    scanf("%d", &(temp->data));
    temp->next = NULL;

    //if linked list is empty
    //node created will be head

    if(head == NULL){
      head = temp;
    }
    else{
      //iterate and assign to the end of the list
      point = head;
      while(point->next != NULL){
        point = point->next;
      }
      //add to the end of the list
      point->next = temp;
    }
  }
  return head;
}


void displayList(node * head) {
  node * point = head;
  //prints everything but last node w arrow
  while(point-> next!= NULL){
    printf("\t%d  ->", point->data);
    point = point->next;
  }
  printf("\t%d", point->data);
  printf("\n");
}

void displaySum(node * head) {
  int sum = 0;
  float avg = 0;
  int count = 0;
  node * point = head;
  while(point){
    sum += point->data;
    count++;
    point = point->next;
  }
  avg = sum/count;
  printf("The sum of the nodes are %d\n", sum);
  printf("The average of the nodes are %.2f\n", avg);
}

//add code to free