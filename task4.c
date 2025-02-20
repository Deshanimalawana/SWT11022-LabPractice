#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main() {
    struct Book{
    char title[120];
    char author[20];
    double price;
    };

    struct Book myBook;
    strcpy(myBook.title,"The Catcher in the Ray");
    strcpy(myBook.author, "J.D.salinger");
    myBook.price=12.99;

    printf("Book Title:%s\n",myBook.title);
    printf("Author: %s\n", myBook.author);
    printf("price:$%f/n",myBook.price);

    return 0;



}
