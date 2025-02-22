#include <stdio.h>
#include <string.h>

struct Book {
    char title[100];
    char author[100];
    float price;

    };
    int main() {
    struct Book mybook;


    strcpy(mybook.title, "Never Lie");
    strcpy(mybook.author, "Freida McFadden");
    mybook.price = 2500;

    printf("Book Title: %s\n", mybook.title);
    printf("Author: %s\n", mybook.author);
    printf("Price: %.2f\n", mybook.price);

    return 0;
}
