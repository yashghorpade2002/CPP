# include <stdio.h>
# include <stdlib.h>

struct Node {

	int data;
	struct Node *next;
};

struct Node *front = NULL;
struct Node *rear = NULL;

void enqueue(int data) {

	struct Node *temp = front;
	struct Node *newnode = (struct Node*)malloc(sizeof(struct Node));
	newnode->data = data;
	newnode->next = NULL;

	while(temp->next != NULL) {
	
		temp = temp->next;
	}
	temp->next = newnode;
	
	if(temp->next == NULL) {
		front = newnode;
		rear = newnode;
	} else
		rear++;
}

void printQueue() {

	struct Node *temp = front;
	while(temp->next != NULL) {
	
		if(temp->next != NULL)
			printf("|%d|->",temp->data);
		else
			printf("|%d|",temp->data);

	}
}

void main() {

	enqueue(10);
	enqueue(20);
	printQueue();
}
