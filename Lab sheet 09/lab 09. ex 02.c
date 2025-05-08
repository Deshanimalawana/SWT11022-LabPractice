#include <stdio.h>


      void printStars();        //declaring the function


        int main(){

        printStars();            // calling the function
        return 0; }


        void printStars(){           //defining the function
        int n;
        int i;

            printf("enter a number: ");
            scanf("%d", &n);

            for (i=0; i<n; i++){

                printf("*");
            }
                printf("\n");

        }











