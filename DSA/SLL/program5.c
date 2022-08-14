# include <stdio.h>
int x = 10;
int * fun() {

	//int x = 10;
	return &x;
}
void main() {

	int *iptr = fun();
	printf("%d\n", *iptr);
}
