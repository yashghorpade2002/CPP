
// Stack implementation using array

# include <stdio.h>
# define size 5

int Sarr[size];
int top = -1;

void push(int data){

	if(top == size-1){
	
		printf("Stack Overflow \n");
		return;

	}
	top++;
	Sarr[top] = data;
}

int pop() {

	if(top == -1){
	
		printf("Stack Underflow \n");
		return -1;

	}
	top--;
	return Sarr[top+1];

}

void printstack() {

	for(int i=top; i>=0; i--) {
	
		printf("%d\n",Sarr[i]);

	}
}

void main() {

	char ch;

	do {
	
		printf("\t 1] Push Stack\n");
		printf("\t 2] Pop Stack\n");
		printf("\t 3] Print Stack\n");

		int  choice;
		printf("Enter your choice \n");
		scanf("%d",&choice);

		switch(choice) {
		
			case 1:
				{
				
					int data;
					printf("Enter Data\n");
					scanf("%d",&data);
					push(data);
					break;
				}

			case 2:
				{
				
					int rm;
					rm = pop();
					if(top != -1)
						printf("Popped element is %d \n",rm);
					if(top == -1 && Sarr[top+1] == rm)
						printf("popped element is %d \n",rm);
					break;
				}

			case 3:
				printstack();
				break;

			default:
				printf("Wrong Choice\n");
				break;

		}
		getchar();
		printf("Do you want to continue ? \n");
		scanf("%c",&ch);

			
	}while(ch == 'Y' || ch == 'y');

}
