# include <stdio.h>
# include <stdlib.h>
struct Node {

	struct Node *prev;
	int data;
	struct Node *next;

};

struct Node *head = NULL;

void printNode() {

	struct Node *temp = head;
	while(temp != NULL) {
	
		if(temp->next != NULL)	
			printf("|%d| -> ",temp->data);
		else	
			printf("|%d|",temp->data);
		
		temp = temp->next;

	}
	printf("\n");
}

void Addfirst() {

	struct Node *temp = head;
	struct Node *newNode = (struct Node*)malloc(sizeof(struct Node));
	int data;
	printf("Enter Data :\n");
	scanf("%d",&data);
	newNode->data = data;
	newNode->prev = NULL;
	newNode->next = NULL;
	
	newNode->next = head;
	head->prev = newNode;
	head = newNode;

}

void Addlast() {

	struct Node *temp = head;
	struct Node *newNode = (struct Node*)malloc(sizeof(struct Node));
	int data;
	printf("Enter Data :\n");
	scanf("%d",&data);
	newNode->data = data;
	newNode->prev = NULL;
	newNode->next = NULL;
	
	while(temp->next != NULL) {
	
		temp = temp->next;
	}

	temp->next = newNode;
	newNode->prev = temp;
	
}

void Addatpos(int pos) {

	struct Node *temp = head;
	struct Node *newNode = (struct Node*)malloc(sizeof(struct Node));
	int data;
	printf("Enter Data :\n");
	scanf("%d",&data);
	newNode->data = data;
	newNode->prev = NULL;
	newNode->next = NULL;
	
	while(pos-2) {
	
		temp = temp->next;
		pos--;
	}
	newNode->next = temp->next;
	newNode->prev = temp;
	temp->next = newNode;
	newNode->next->prev = newNode;


}

void deletefirst() {

	struct Node *temp = head;
	head = head->next;
	head->prev = NULL;
	free(temp);

}

void deletelast() {

	struct Node *temp = head;
	while(temp->next != NULL) {
	
		temp = temp->next;
	}
	
	temp->prev->next = NULL;
	free(temp);

}

void Deleteatpos(int pos) {

	struct Node *temp = head;
	while(pos-1){
	
		temp = temp->next;
		pos--;

	}

	temp->prev->next = temp->next;
	temp->next->prev = temp->prev;
	free(temp);

}
void main() {

	struct Node *newNode = (struct Node*)malloc(sizeof(struct Node));
	int data;
	printf("Enter Data :\n");
	scanf("%d",&data);
	newNode->data = data;
	newNode->prev = NULL;
	newNode->next = NULL;
	head = newNode;

	printNode();

	Addfirst();
	printNode();

	Addlast();
	printNode();

	int pos;
	printf("Enter the position: \n");
	scanf("%d",&pos);
	Addatpos(pos);
	printNode();

/*	deletefirst();
	printNode();

	deletelast();
	printNode();
*/
	printf("Enter position of deletion:\n");
	scanf("%d",&pos);
	Deleteatpos(pos);
	printNode();
	
}
