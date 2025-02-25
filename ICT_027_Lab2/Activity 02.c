#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    struct Book {
        char title[100];
        char author[50];
        float price;
    };

    struct Book mybook;

    strcpy(mybook.title, "The Catcher in the Rye");
    strcpy(mybook.author, "J.D. Salinger");
    mybook.price = 12.99;


    printf("Book Title: %s\n", mybook.title);
    printf("Author: %s\n", mybook.author);
    printf("Price: $%.2f\n", mybook.price);

    return 0;
}

