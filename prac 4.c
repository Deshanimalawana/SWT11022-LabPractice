#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    struct Book {
        char title[100];
        char author[50];
        double price;
    };

    struct Book mybook;
    strcpy(mybook.title, "the catcher in the rye");
    strcpy(mybook.author, "J.D. Salinger");
    mybook.price = 12.99;

    printf("Book title: %s\n", mybook.title);
    printf("Author: %s\n", mybook.author);
    printf("Price: %.2f\n", mybook.price);

    return 0;
}
