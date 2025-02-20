#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(){

    struct Book {
        char title[100];
        char author[50];
        double price;

};

    struct Book myBook;
        strcpy(myBook.title,"The University");
        strcpy(myBook.author,"A.H.Kumar");
        myBook.price = 66.99;

        printf("Book Title:%s\n",myBook.title);
        printf("Book Author:%s\n",myBook.author);
        printf("Price:s%.2f\n",myBook.price);

   return 0;

}
