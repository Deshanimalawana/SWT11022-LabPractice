#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Book {
    char title[100];
    char author[50];
    float price;
    };

int main(){
    struct Book myBook;
    strcpy(myBook.title, "A bend in the river");
    strcpy(myBook.author, "V.S Naipaul");
    myBook.price= 12.99;

    printf("Book Title: %s\n", myBook.title);
    printf("Author: %s\n", myBook.author);
    printf("price: $%.2f\n", myBook.price);

    return 0;

    }
