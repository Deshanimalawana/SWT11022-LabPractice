#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct Book {
    char title[100];
    char author[50];
    float price;
};

    int main(){

    struct Book mybook;
    strcpy(mybook.title, "The Psychology Of Money");
    strcpy(mybook.author, "Morgan Housel");
    mybook.price = 49.99;

    printf("The Book Title: %s\n", mybook.title);
    printf("Author of the Book: %s\n", mybook.author);
    printf("The Book price: $%.2f\n", mybook.price);
    return 0;
}


