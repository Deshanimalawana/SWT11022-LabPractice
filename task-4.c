#include <stdio.h>
#include <string.h>
struct Book {
char title[100];
char author[50];
double price;
};
 int main(){
 struct Book myBook;
 strcpy(myBook.title, "The catcher in the Rye");
 strcpy(myBook.author, "J.D. Salinger");
 myBook.price = 12.99;

 printf("Book title: %s\n", myBook.title);
 printf("author: %s\n", myBook.author);
 printf("price: $%.2f\n", myBook.price);

 return 0;

 }
