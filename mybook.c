#include <stdio.h>
#include <string.h>

struct Book {
    char title[150];
    char author[80];
    double price;
};

int main() {

    struct Book myBook;
    strcpy(myBook.title, "Harry Potter");
    strcpy(myBook.author, "J.K. Rowling");
    myBook.price = 35.00;

    printf("Book Title: %s\n", myBook.title);
    printf("Author: %s\n",myBook.author);
    printf("Price: $%.2f\n",myBook.price);

    return 0;
}