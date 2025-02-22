#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    struct Book {
        char title[100];
        char author[50];
        double price;
 };

        struct Book myBook;
        strcpy(myBook.title, "Madolduwa");
        strcpy(myBook.author, "Martin Wikramasingha");
        myBook.price= 12.99;

        printf("Book Title: %s\n",myBook.title);
        printf("Book author is %s\n",myBook.author);
        printf("Book price is Rs%.2f\n",myBook.price);



        return 0;
}
