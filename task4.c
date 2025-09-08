#include <stdio.h>
#include <string.h>
int main(){
    struct book {
    char title[100];
    char author[50];
    double price;
    };

    struct book myBook;
    strcpy(myBook.title,"The Cather in the Rye");
    strcpy(myBook.author,"J.D. Salinger");
    myBook.price = 12.99;

    printf("Book Title: %s\n",myBook.title);
    printf("Author: %s\n",myBook.author);
    printf("Price:$%.2f\n",myBook.price);
    return 0 ;
}

