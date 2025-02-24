#include <stdio.h> 
int main(){
	char first_name[30];
    char last_name [30];
    int birth_year;

    printf("What is your first name ? ");
    scanf("%s",first_name);
    printf("What is your last name ? ");
    scanf("%s",last_name);
    printf("What is your birth year ? ");
    scanf("%d",&birth_year);
    printf("\n%s %s was born in %d\n",first_name,last_name,birth_year);
	return 0;
}