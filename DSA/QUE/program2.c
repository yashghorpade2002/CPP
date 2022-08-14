# include <stdio.h>
# define size 5

int queueArray[size];
int front = -1;
int rear = -1;

int isFull() {

	if(front == ((rear+1) % size))
		return 1;
	return 0;
}

int isEmpty() {

	if(front == -1 && rear == -1)
		return 1;
	return 0;
}

void enqueue(int data) {

	if(isFull())
		printf("Queue is full \n");
	else {
	
		if(front == -1)
			front++;
		rear = (rear+1) % size;
		queueArray[rear] = data;

	}
}

int dequeue() {
	
	if(isEmpty()) {
		printf("Queue is empty\n");
		return -1;
	} else {
		int x = queueArray[front];
		if(front == rear) {
		
			front = -1;
			rear = -1;
		}
		front++;
		return x;
	}
}

void printQueue() {

	if(isEmpty())
		printf("Queue is empty\n");
	else {

		for(int i=front; i!=rear; i = (i+1)%size)
			printf("|%d|  ",queueArray[i]);
		printf("|%d| \n",queueArray[rear]);
	}

}

void main() {

	enqueue(10);
	enqueue(20);
	enqueue(30);
	enqueue(40);
	enqueue(50);

	printQueue();
	dequeue();
	dequeue();

	printQueue();

}
