# include <stdio.h>
/*
int sumof(int x) {

	int num = 0;
	int rev = 0;
	while(x != 0) {
	
		rev = x % 10;
		num = num + rev;
		x = x/10;
	}
	return num;
}

*/

int sumof(int x) {

	static int num = 0;
	static int rev = 0;

	if(x == 0)
		return num;
	rev = x % 10;
	num = num + rev;

	sumof(x/10);
}

void main() {

	int sum = sumof(123);
	printf("%d\n",sum);
}



