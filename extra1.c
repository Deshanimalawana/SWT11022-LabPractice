#include <string.h>
#include <stdlib.h>
int main(){
    struct Book{
    char title[110];
    char author[150];
    double price;
    };
    struct Book myBook;
    strcpy(myBook.title, "The Catcher in the Rye");
    strcpy(myBook.author, "J.D.Salinger");
    myBook.price=12.99;
    printf("Book Title: %s\n" ,myBook.title);
    printf("Book Author: %s\n" ,myBook.author);
    printf("Price:$%.2f\n" ,myBook.price);
    return 0;








}
