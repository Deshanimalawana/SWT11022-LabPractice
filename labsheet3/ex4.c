#include<stdio.h>
#include<string.h>
#include<stdio.h>
int main(){
struct book{
    char title[100];
    char author[50];
    double price;

};
    struct book myBook;
    strcpy(myBook.title,"The Catcher in the Rye");
    strcpy(myBook.author,"J.D.Salinger");
    myBook.price=122.33;

    printf("Book title: %s\n",myBook.title);
    printf("Author: %s\n",myBook.author);
    printf("price: $%.2f\n",myBook.price);
    return 0;

}
