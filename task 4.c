#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct Book{
char title[100];
char author[50];
double price;
};


int main(){
    struct Book myBook;
strcpy(myBook.title,"The catcher in the Rye");
strcpy(myBook.author,"J.D.Salinger");
myBook.price=12.99;

printf("Book title:%s\n",myBook.title);
printf("Author:%s\n",myBook.author);
printf("Price:$%.2f",myBook.price);


}
