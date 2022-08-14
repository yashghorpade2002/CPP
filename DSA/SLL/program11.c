
# include <stdio.h>
# include <stdlib.h>

struct Node {
	int data;
	struct Node *next;

};
struct Node *head = NULL;

void addAtbeg() {

	struct Node *Node2 = (struct Node *)malloc(sizeof(struct Node));
	Node2->data = 20;
	Node2->next = NULL;

	Node2->next = head;
	head = Node2;

}

void addAtend() {

	struct Node *temp = head;
	struct Node *Node3 = (struct Node *)malloc(sizeof(struct Node));
	Node3->data = 40;
	Node3->next = NULL;

	while(temp->next != NULL) {
	
		temp = temp->next;
	}
	temp->next = Node3;
}

void PrintNode() {

	struct Node *temp = head;
	while(temp != NULL) {
		
		if(temp->next == NULL)	
			printf("| %d | ",temp->data);
		else

			printf("| %d | -> ",temp->data);
		temp = temp->next;

	}
	printf("\n");
}

int count() {

	int count = 0;
	struct Node *temp = head;
	while(temp != NULL) {
	
		count++;
		temp = temp->next;
	}
	//printf("%d\n",count);
	return count;
}

void insertAtpos(int pos) {

	struct Node *temp = head;
	struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
	newNode->data = 25;
	newNode->next = NULL;

	while(pos-2) {
	
		temp = temp->next;
		pos--;
	}
	
	newNode->next = temp->next;
	temp->next = newNode;
}

void deleteFirst() {

	struct Node *temp = head;
	head = head->next;

	free(temp);

}

void deleteLast() {

	struct Node *temp = head;

	while(temp->next->next != NULL) {
	
		temp = temp->next;
	}
	free(temp->next);
	temp->next = NULL;
}

void deleteAtpos(int pos) {

	struct Node *temp = head;
	while(pos-2) {
	
		temp = temp->next;
		pos--;
	}
	struct Node *temp2 = temp->next;
	temp->next = temp2->next;

	free(temp2);
}

void Reverse() {

	int cnt = count();
	struct Node *temp1 = head;
	struct Node *temp2 = head;
	int num = 0;
	while(num < (cnt/2)) {
	
		int x = 1;
		while(x < cnt-num) {
		
			temp2 = temp2->next;
			x++;
		}
		int swap = 0;
		swap = temp2->data;
		temp2->data = temp1->data;
		temp1->data = swap;

		temp1 = temp1->next;
		temp2 = head;

		num++;
	}
	PrintNode();

}

void InplaceRev() {

	struct Node *temp1 = head;
	struct Node *temp2 = NULL;
	struct Node *temp3 = NULL;

	while(temp1 != NULL) {
	
		temp2 = temp1->next;
		temp1->next = temp3;
		temp3 = temp1;
		temp1 = temp2;
	} 
	head = temp3;
}

void main() {

	struct Node *Node1 = (struct Node *)malloc(sizeof(struct Node));
	Node1->data = 10;
	Node1->next = NULL;

	head = Node1;

	PrintNode();

	addAtbeg();
	addAtend();
	PrintNode();

	//count();
	
	insertAtpos(3);
	PrintNode();


        /*
	deleteFirst();
	PrintNode();

	deleteLast();
	PrintNode();

	int pos;
	printf("Enter Pos\n");
	scanf("%d",&pos);
	deleteAtpos(pos);
	PrintNode;
        */

	//Reverse();
	InplaceRev();
	PrintNode();

}
