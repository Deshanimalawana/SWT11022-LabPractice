#include <stdio.h>
#include <strings.h>

struct Book {
        char title[100];
        char author[50];
        double price;

    };

int main(){

    struct Book myBook;
    strcpy(myBook.title, "the catcher in the rye");
    strcpy(myBook.author, "J.D.Salinger");
    myBook.price = 12.99;

    printf("book title: %s\n",myBook.title);
    printf("Author: %s\n",myBook.author);
    printf("price:$%.2f\n",myBook.price);
    return 0;

}
