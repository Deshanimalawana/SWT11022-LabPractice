#include <stdio.h>

int main(){
	char firstname[20];
	char lastname[20];
	int dob;

	printf("What is your Firstname?: ");
	scanf("%s", firstname);

	printf("What is your Lastname?: ");
	scanf("%s", lastname);

	printf("What is your birth year?: ");
	scanf("%d", &dob);

	printf("%s %s was born in %d", firstname,lastname,dob);

	return 0;
}
