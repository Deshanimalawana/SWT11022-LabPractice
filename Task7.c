#include <stdio.h>
#include <string.h>

struct Book {
    char title[150];
    char author[80];
    double price;
};

int main(){
    struct Book MyBook;

    strcpy(MyBook.title, " Gone Girl – Gillian Flynn");
    strcpy(MyBook.author, "Gillian Flynn");
    MyBook.price = 400.50;

    printf("Book Title %s", MyBook.title);
    printf("Book Author %s", MyBook.author);
    printf("Price %.2f \n", MyBook.price);

    return 0;
}