#include<stdio.h>
#include<string.h>

int main(){
struct Book{
 char title[100];
 char author[50];
 double price;
};
struct Book myBook;
strcpy(myBook.title,"The catcher in the rye");
strcpy(myBook.author,"J.D.salinger");
myBook.price=12.99;
 printf("Book title: %s\n",myBook.title);
 printf("Author: %s\n",myBook.author);
 printf("price:$%.2f\n",myBook.price);
return 0;
};

