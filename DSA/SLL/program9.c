
# include <stdio.h>
# include <stdlib.h>

struct Node {

	char ch;
	struct Node *next;

};

void main() {

	struct Node *ptr1 = (struct Node *)malloc(sizeof(struct Node));
	ptr1->ch = 'A';
	ptr1->next = NULL;

	struct Node *ptr2 = (struct Node *)malloc(sizeof(struct Node));
	ptr2->ch = 'B';
	ptr2->next = NULL;
	ptr1->next = ptr2;
	
	ptr2 = (struct Node *)malloc(sizeof(struct Node));
	ptr2->ch = 'C';
	ptr2->next = NULL;
	ptr1->next->next = ptr2;

	while(ptr1 != NULL) {
	
		printf("| %c | ",ptr1->ch);
		printf("%p |\n",ptr1->next);
		ptr1 = ptr1->next;
	}
}
