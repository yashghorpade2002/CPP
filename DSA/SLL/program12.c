
# include <stdio.h>
# include <stdlib.h>

struct Node *head = NULL;
struct Node {

	int data;
	struct Node *next;
};

void search(int x) {

	int pos = 1;
	struct Node *temp = head;
	while(temp != NULL) {
	
		if(temp->data == x)
			deleteAtpos(pos);
		pos++;
		temp = temp->next;
	}
}

void deleteAtpos(int pos) {

	struct Node *temp = head;
	while(pos - 2) {
	
		temp = temp->next;
		pos--;
	}
	struct Node *temp2 = temp->next;
	temp->next = temp2->next;

	free(temp2);
}

void main() {

	struct Node *Node1 = (struct Node*)malloc(sizeof(struct Node));
	Node1->data = 10;
	Node1->next = NULL;
	head = Node1;

	struct Node *Node2 = (struct Node*)malloc(sizeof(struct Node));
	Node2->data = 20;
	Node2->next = NULL;

	struct Node *Node3 = (struct Node*)malloc(sizeof(struct Node));
	Node3->data = 30;
	Node3->next = NULL;

	struct Node *Node4 = (struct Node*)malloc(sizeof(struct Node));
	Node4->data = 40;
	Node4->next = NULL;

	struct Node *Node5 = (struct Node*)malloc(sizeof(struct Node));
	Node5->data = 50;
	Node5->next = NULL;

	Node1->next = Node2;
	Node2->next = Node3;
	Node3->next = Node4;
	Node4->next = Node5;

	int x;
	printf("Enter the node to be deleted\n");
	scanf("%d",&x);
	search(x);

}
