#include <stdio.h>
#include <string.h>

struct Book {
    char name[50];
    char writer[50];
    int price;
};

int main() {
    struct Book bookdetails;


    strcpy(bookdetails.name, "Harry Potter");
    strcpy(bookdetails.writer, "J.K. Rowling");
    bookdetails.price = 2000;

    printf("Book Name: %s\n", bookdetails.name);
    printf("Writer: %s\n", bookdetails.writer);
    printf("Price: %d\n", bookdetails.price);

    return 0;
}
