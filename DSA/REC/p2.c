# include <stdio.h>
# include <stdbool.h>

bool pelistr(char str[],int len) {

	static int i = 0;
	if(i < len/2)
		return true;
	if(str[i] != str[len-i-1])
		return false;
	i++;
	pelistr(str, len);
}

void main() {

	char str[] = "racecar";
	int len = sizeof(str);

	bool val = pelistr(str,len-1);

	if(val == true)
		printf("the given string is palindrome\n");

}
