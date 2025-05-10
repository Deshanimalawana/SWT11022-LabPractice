#include <stdio.h>
int main(){

	int hours, rate;
	printf("Enter your work hours:");

	scanf("%d", &hours);
	printf("Enter your work rate:");

	scanf("%d", &rate);
	printf("Total salary is:%d", hours * rate);

	return 0;
	
	
}