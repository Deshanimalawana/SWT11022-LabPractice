#include <stdio.h>
#include <string.h>

struct Book {
    char title[150];
    char author[80];
    double price;
};

int main(){
    struct Book My_Book;

    strcpy(My_Book.title, "Dune");
    strcpy(My_Book.author, " Frank Herbert");
    My_Book.price = 35.50;

    printf("Book Title : %s", My_Book.title);
    printf("Book Author : %s", My_Book.author);
    printf("Price : %.2f \n", My_Book.price);

    return 0;
}