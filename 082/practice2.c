#include<stdio.h>


 int main() {
   struct Book{;
    char title[20];
    char author[10];
    double price;
   };
    struct Book myBook;
    strcpy(myBook.title, "100 Stories");
    strcpy(myBook.author, "K.D.Nila");
    myBook.price = 500.00;


    printf("Book Title: %s\n", myBook.title);
    printf("Author: %s\n", myBook.author);
    printf("Price: $%.2f\n", myBook.price);
     return 0;





 }
