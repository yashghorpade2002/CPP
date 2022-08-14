# include <stdio.h>
# define size 5

int QueueArr[5];
int front = -1;
int rear = -1;

int isfull() {

	if(rear == size-1)
		return 1;
	return 0;
}

int isEmpty() {

	if((front == -1 && rear == -1) || rear<front)
		return 1;
	return 0;
}

void enqueue(int data) {

	if(isfull()) {
	
		printf("Queue is full\n");
	} else {
	
		if(front == -1)
			front++;
		rear++;
		QueueArr[rear] = data;
	}
}

void dequeue() {

	if(isEmpty()) 
		printf("Queue is empty\n");
	else
		front++;
}

void printQueue() {

	if(isEmpty())
		printf("Queue is empty\n");
	else {
		for(int i=front; i<=rear; i++)
			printf("|%d|  ",QueueArr[i]);
		printf("\n");
	}
}

void main() {
/*
	enqueue(10);
	enqueue(20);
	enqueue(30);
	enqueue(40);
	enqueue(50);
	enqueue(60);
*/
//	printQueue();
	dequeue();
	
	printQueue();
	dequeue();
	
	printQueue();
	dequeue();
}
