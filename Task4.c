#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(){

    struct Book{
        char title[100];
        char author[50];
        double price;
    };
    struct Book myBook;
    strcpy(myBook.title,"A Changed Man");
    strcpy(myBook.author,"T Hardy");
    myBook.price=50.23;

    printf("Book Title: %s\n",myBook.title);
    printf("Book Author: %s\n",myBook.author);
    printf("Price:$%2f\n", myBook.price);

    return 0;
}
