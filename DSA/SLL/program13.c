# include <stdio.h>
# include <stdlib.h>

struct Node {

	int data;
	float height;
	struct Node * next;

};

struct Node *head = NULL;

void AddatBeg() {

	struct Node *temp = head;
	struct Node *Node2 = (struct Node*)malloc(sizeof(struct Node));
	Node2->data = 30;
	Node2->height = 6.0;
	Node2->next = NULL;

	Node2->next = head;
	head = Node2;
}

void AddatEnd() {

	struct Node *temp = head;
	struct Node *Node3 = (struct Node*)malloc(sizeof(struct Node));
	Node3->data = 40;
	Node3->height = 5.45;
	Node3->next = NULL;

	while(temp->next != NULL) {
	
		temp = temp->next;
	}
	
	temp->next = Node3;
}

void AddatPos(int pos) {

	struct Node *temp = head;
	struct Node *Node4 = (struct Node*)malloc(sizeof(struct Node));
	Node4->data = 50;
	Node4->height = 4.89;
	Node4->next = NULL;

	while(pos-2) {
	
		temp = temp->next;
		pos--;
	}
	Node4->next = temp->next;
	temp->next = Node4;
}

void DeleteatBeg() {

	struct Node *temp = head;
	head = head->next;
	free(temp);
}

void DeleteatEnd() {

	struct Node *temp = head;
	while(temp->next->next != NULL) {
	
		temp = temp->next;
	}
	free(temp->next);
	temp->next = NULL;
}

void DeleteatPos(int pos) {

	struct Node *temp1 = head;
	struct Node *temp2 = head;
	
	while(pos-2){
	
		temp1 = temp1->next;
		pos--;
	}

	temp2 = temp1->next;
	temp1->next = temp2->next;

	free(temp2);

}

void printNode() {

	struct Node *temp = head;
	while(temp != NULL) {
	
		if(temp->next != NULL)
			printf("| %d , %.2f |->",temp->data,temp->height);
		else
			printf("| %d , %.2f |",temp->data,temp->height);

		temp = temp->next;
	}
	printf("\n");
}

int Count() {

	struct Node *temp = head;
	int cnt=0;
	while(temp != NULL) {
	
		temp = temp->next;
		cnt++;
	}
	//printf("%d\n",count);
	return cnt;
}

void Reverse() {                             //    head = 100

	struct Node *temp1 = head;          //      |10|200| -> |20|300| -> |30|400| -> |40|500| -> |50|NULL|
	struct Node *temp2 = head;         //          100  	  200	      300      	  400         500

                                          //      temp1 = 100 	temp2 = 100
	int cnt = Count();
	int x = 0;
	while(x < (cnt/2)) {
	
		int num = 1;
		while(num < cnt-x) {
		
			temp2 = temp2->next;
			num++;
		}
		int swap1 = 0;
		float swap2 = 0.0;

		swap1 = temp2->data;
		temp2->data = temp1->data;
		temp1->data = swap1;
		
		swap2 = temp2->height;
		temp2->height = temp1->height;
		temp1->height = swap2;

		temp2 = head;
		temp1 = temp1->next;

		x++;
	}

}

void InPlaceRev() {

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

/*
int Count() {

	struct Node *temp = head;
	int cnt=0;
	while(temp != NULL) {
	
		temp = temp->next;
		cnt++;
	}
	//printf("%d\n",count);
	return cnt;
}
*/

void main() {

	struct Node *Node1 = (struct Node *)malloc(sizeof(struct Node));
	Node1->data = 20;
	Node1->height  = 6.5;
	Node1->next = NULL;

	head = Node1;
	printNode();

	AddatBeg();
	printNode();

	AddatEnd();
	AddatEnd();
	printNode();

	AddatPos(3);
	printNode();
	//Count();

/*	DeleteatBeg();
	printNode();

	DeleteatEnd();
	printNode();

	DeleteatPos(2);
	printNode();
*/
	Reverse();
	printNode();

	InPlaceRev();
	printNode();

}
