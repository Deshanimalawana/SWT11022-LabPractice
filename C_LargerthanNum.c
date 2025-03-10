
#include <stdio.h>
int main(void) {
	//Declaring & initilization three Variables
	int a;
	int b;
	int c;
	printf("Anway you like as a Number:");
	scanf("%d", &a);
	printf("Anway you like as b Number:");
	scanf("%d", &b);
	printf("Anway you like as c Number:");
	scanf("%d", &c);

	if (a < b) {
		printf("b is larger than a: %d\n",b);
		if (b < c) {
			printf("c is larger than b: %d\n",c);
		}
		else {
			printf("b is larger than c:%d\n",b);
		}
	}
	else {
		printf("a is larger than b\n");
	}


	return 0;
}
