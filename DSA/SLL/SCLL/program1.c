# include <stdio.h>
# include <stdlib.h>

struct Node {

	int data;
	struct Node *next;

};

struct Node *head = NULL;
struct Node *tail = NULL;

void printlist() {

	struct Node *temp = head;
	do {
	
		if(temp->next != head)
			printf("|%d| -> ",temp->data);
		else
			printf("|%d|",temp->data);
		temp = temp->next;

	}while(temp != head);

	printf("\n");

}

void Addatfirst() {

	struct Node *newnode = (struct Node *)malloc(sizeof(struct Node));
	int data;
	printf("Enter Data \n");
	scanf("%d",&data);
	newnode->data = data;

	newnode->next = head;
	tail->next = newnode;
	head = newnode;

}

void Addatlast() {

	
	struct Node *newnode = (struct Node *)malloc(sizeof(struct Node));
	int data;
	printf("Enter Data \n");
	scanf("%d",&data);
	newnode->data = data;

	newnode->next = head;
	tail->next = newnode;
	tail = newnode;

}

void Addatpos(int pos) {

	struct Node *temp = head;

	struct Node *newnode = (struct Node *)malloc(sizeof(struct Node));
	int data;
	printf("Enter Data \n");
	scanf("%d",&data);
	newnode->data = data;

	while(pos-2) {
	
		temp = temp->next;
		pos--;

	}
	newnode->next = temp->next;
	temp->next = newnode;

}

void Deletefirst() {

	head = head->next;
	free(tail->next);
	tail->next = head;

}

void Deletelast() {

	struct Node *temp = head;
	while(temp->next->next != head) {
	
		temp = temp->next;
	}
	temp->next = head;
	free(tail);
	tail = temp;

}

void Deleteatpos(int pos) {

	struct Node *temp = head;
	while(pos-2) {
	
		temp = temp->next;
		pos--;
	}
	struct Node *temp1 = temp->next;
	temp->next = temp1->next;
	free(temp1);


}

void reverse() {

	struct Node *temp1 = head;
	struct Node *temp2 = temp1->next;
	struct Node *temp3 = tail;

	while() {
		
		temp1->next = temp3;
		temp2->next = 

	}
}

void main() {

	struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
	newNode->data = 10;
	newNode->next = newNode;

	head = newNode;
	tail = newNode;

	char choice;

	do {
	
		printf("Choices Given \n");
		printf("\t 1]. printlist\n");
		printf("\t 2]. Addatfirst\n");
		printf("\t 3]. Addatlast\n");
		printf("\t 4]. Addatpos\n");
		printf("\t 5]. Deletefirst\n");
		printf("\t 6]. Deletelast\n");
		printf("\t 7]. DeleteAtpos\n");
		printf("\t 8]. Reverselist\n");

		int x;
		printf("Enter Your Choice : \n");
		scanf("%d",&x);

		switch(x) {
		
			case 1:
				printlist();
				break;

			case 2:
				Addatfirst();
				printlist();
				break;

			case 3:
				Addatlast();
				printlist();
				break;

			case 4:
				{
				
					int pos;
					printf("Enter Position of Insertion \n");
					scanf("%d",&pos);
					Addatpos(pos);
					printlist();

				}
				break;

			case 5:
				Deletefirst();
				printlist();
				break;

			case 6:
				Deletelast();
				printlist();
				break;

			case 7:
				{
				
					int pos;
					printf("Enter Position of Deletion \n");
					scanf("%d",&pos);
					Deleteatpos(pos);
					printlist();

				}
				break;
			
			case 8:
				reverse();
				printlist();
				break;	

			default:
				printf("Wrong Choice \n");
				break;
		}

		printf("Do you want to continue(Y/n) \n");
		getchar();
		scanf("%c",&choice);
	
	}while(choice == 'Y' || choice == 'y');

}


