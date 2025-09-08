#include <stdio.h>
#include <string.h>

struct Book {
    char title[150];
    char author[80];
    double price;
};

int main(){
    struct Book Mybook1;

    strcpy(Mybook1.title, " Project Hail Mary");
    strcpy(Mybook1.author, "Andy Weir");
    Mybook1.price = 200.50;

    printf("Book Title - %s", Mybook1.title);
    printf("Book Author - %s", Mybook1.author);
    printf("Price - %.2f \n", Mybook1.price);

    return 0;
}