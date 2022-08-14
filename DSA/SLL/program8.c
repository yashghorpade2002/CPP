# include <stdio.h>

struct Player {

	char pName[20];
	int jersyNo;
	char Name[20];
	float sal;
};

void Passcric(struct Player *cric) {

	printf("%s\n",cric->pName);
	printf("%d\n",cric->jersyNo);
	printf("%s\n",cric->Name);
	printf("%f\n",cric->sal);

}
void Passfb(struct Player *fb) {

	printf("%s\n",fb->pName);
	printf("%d\n",fb->jersyNo);
	printf("%s\n",fb->Name);
	printf("%f\n",fb->sal);

}

void main() {

	struct Player cric = {"virat Kholi",18,"India",250.00};
	struct Player Fb = {"Messi",10,"Argentina",850.00};

	struct Player *cptr = &cric;
	struct Player *fptr = &Fb;

	Passcric(cptr);
	Passfb(fptr);
}
