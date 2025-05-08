#include <stdio.h>



   void greetUser();  //declaraing avoid function



    int main(){

    greetUser();        //calling the function
    return 0;
                }

        void greetUser(){        //define the function

        char name[15];
        printf("Enter your name: ");
        scanf("%s", &name);


        printf("\nHello %s! Welcome to the lab.\n", name);



        }
