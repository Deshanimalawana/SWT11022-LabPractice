#include <stdio.h>
#include <stdlib.h>

void displayDeveloperInfo(char name[], char index[]){

    printf("\nDeveloped by: %s", name);
    printf("\nIndex Number: %s", index);
    printf("\nCourse: Fundamentals of Programming\n");

}

int main(){
    char name[100], index[100];


    printf("Enter Your name: ");
    scanf("%s", &name);

    printf("Enter Your index: ");
    scanf("%s", &index);


    displayDeveloperInfo(name, index);
    return 0;
}


