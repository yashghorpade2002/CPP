# include <stdio.h>

int factorial(int data) {

	if(data == 1)
		return data;
	return data * factorial(data - 1);

}

void main() {

	int num;
	printf("Enter a number : ");
	scanf("%d",&num);

	int fact;
	fact = factorial(num);

	printf("%d\n",fact);
}
