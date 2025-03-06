#include <stdio.h>


int main() {

struct Book {
    char title[100];
    char author[50];
    double price;
};



    struct Book bookdetails = {"how to dance in midnight", "DR.Anshaf", 3.01};


    printf("Book Details:\n");
    printf("Title: %s\n", bookdetails.title);
    printf("Author: %s\n",bookdetails.author);
    printf("Price: $%.2f\n",bookdetails.price);

    return 0;
}
