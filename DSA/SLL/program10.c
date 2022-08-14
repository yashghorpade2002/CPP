
# include <stdio.h>
# include <stdlib.h>

struct Info {

	int age;
	float height;
	struct Info *next;

};

void main() {

	struct Info *ptr1 = (struct Info *)malloc(sizeof(struct Info));
	ptr1->age = 28;
	ptr1->height = 5.8;
	ptr1->next = NULL;

	struct Info *ptr2 = (struct Info *)malloc(sizeof(struct Info));
	ptr2->age = 34;
	ptr2->height = 5.4;
	ptr2->next = NULL;
	ptr1->next = ptr2;

	ptr2 = (struct Info *)malloc(sizeof(struct Info));
	ptr2->age = 30;
	ptr2->height = 6.0;
	ptr2->next = NULL;
	ptr1->next->next = ptr2;

	ptr2 = (struct Info *)malloc(sizeof(struct Info));
	ptr2->age = 23;
	ptr2->height = 5.5;
	ptr2->next = NULL;
	ptr1->next->next->next = ptr2;

	while(ptr1 != NULL) {
	
		printf("| %d | ",ptr1->age);
		printf("%f |",ptr1->height);
		printf(" %p |\n",ptr1->next);
		ptr1 = ptr1->next;
	}
}
