# include <stdio.h>
# include <stdbool.h>

bool peristr(char str[], int len) {

	int i = 0;
	while(i < len/2) {
	
		if(str[i] == str[len-i-1])
			i++;
		else
			return false;

	}
	return true;
}

void main() {

	char str[] = "racecar";
	int len = sizeof(str);

	bool val = peristr(str, len-1);
	if(val == true)
		printf("The given string is pailendrome\n");

}
