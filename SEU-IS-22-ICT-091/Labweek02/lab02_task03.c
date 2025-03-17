#include <stdio.h>

int main(){

	// variable declaration
	char name[20];
	int a, b;
	float c, f;

	// variable initialation
	char val[] = "Welcome";
	a= 10;

	//define constant
	const float x = 3.73;

	//interaction with the user
	printf("Enter your name:");
	scanf("%s", name);
	printf("%s",val);

	printf("\nYour name is %s", name);
	c= 90.0*3.0;
	printf("\nValue of c: %.2f", c);
	printf("\nValue of X: %.2f", x);

	//using the escape sequance
	printf("\nHello\tWorld\n\n");
	printf("You\nare\nlearning\n\'c\' language\n\n\"Do you know C language?\"\n");

	return 0;
}
