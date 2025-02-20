#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main (){

    struct Book{
        char title[100];
        char auther[50];
        double price;
    };
    struct Book myBook;
    strcpy(myBook.title, "Madolduwa");
    strcpy(myBook.auther, "Martin");
    myBook.price= 560.00;
    printf("Book Title: %s\n",myBook.title);
    printf("Auther: %\n",myBook.auther);
    printf("Price: $%.2f\n",myBook.price);
}
