#include <stdio.h>
#include <string.h>

struct Book {
    char title[150];
    char author[80];
    double price;
};

int main(){
    struct Book MyBook;

    strcpy(MyBook.title, "The Hobbit");
    strcpy(MyBook.author, "J.R.R. Tolkien");
    MyBook.price = 200.50;

    printf("Book Title: %s", MyBook.title);
    printf("Book Author: %s", MyBook.author);
    printf("Price: %.2f \n", MyBook.price);

    return 0;
}