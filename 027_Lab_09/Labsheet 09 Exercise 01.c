#include<stdio.h>

    void displayDeveloperinfo(char name[],char index[]){

        printf("Developed by :%s\n",name);
        printf("Index Number :%s\n",index);
        printf("Course : Fundamentals of Programming\n");

}

    int main(){

        char name[20],index[10];

        printf("Enter Your Name:");
        scanf("%s",name);

        printf("Enter Your Index:");
        scanf("%s",index);

        printf("\n\n");

        displayDeveloperinfo(name,index);

    return 0;

}
