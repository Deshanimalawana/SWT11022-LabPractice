#include <stdio.h>
#include <string.h>
#include <stdlib.h>
    int main(){

    struct Book{
    char title[110];
    char author[150];
    double price;
    };

    struct Book myBook;
    strcpy(myBook.title,"The catcher in the Ray");
    strcpy(myBook.author,"J.D.Saliger");
    myBook.price=12.99;

    printf("Book Title: %s\n" ,myBook.title);
    printf("Author: %s\n" ,myBook.author);
    printf("price:$%.2f\n" ,myBook.price);

    return 0;
    }
