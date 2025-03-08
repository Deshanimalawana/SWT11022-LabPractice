#include <stdio.h>
#include <string.h>

struct Book {
    char title[150];
    char author[80];
    double price;
};

int main(){
    struct Book book1;

    strcpy(book1.title, "The Hobbit");
    strcpy(book1.author, "J.R.R. Tolkien");
    book1.price = 200.50;

    printf("Book Title = %s", book1.title);
    printf("Book Author = %s", book1.author);
    printf("Price = %.2f \n", book1.price);

    return 0;
}