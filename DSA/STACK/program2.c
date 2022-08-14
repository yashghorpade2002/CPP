// stack implementation using Linked List
// Add at end operation

# include <stdio.h>
# include <stdlib.h>

struct Node {

	int data;
	struct Node *next;

};

void push(int data) {

}

int pop() {


	return 0;
}
void printStack() {


}
void main() {

	struct Node *Newnode = (struct Node*)malloc(sizeof(struct Node));
	Newnode->data = 10;
	Newnode->next = NULL;

	char ch;
	do{
	
		printf("Enter your choice : \n");
		printf("\t 1] Push");
		printf("\t 1] Pop");
		printf("\t 1] printStack");

		int choice;
		scanf("%d",&choice);

		switch(choice) {
		
			case 1:
				{
				
					int data;
					printf("Enter the data to be pushed\n");
					scanf("%d",&data);
					push(data);
					break;
				}

			case 2:
				{
				
					int pe;
					pe = pop();
					printf("The popped element is : %d \n",pe);
					break;
				}

			case 3:
				printStack();
				break;

			default:
				printf("Wrong choice");

		}
		
		getchar();
		printf("Do yo want to continue\n");
		scanf("%c",&ch);

	}while(ch == 'Y' || ch == 'y');

}
