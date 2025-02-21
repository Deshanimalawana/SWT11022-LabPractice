#include<string.h>
#include<stdio.h>

struct Book{
    char title [100];
    char author [50];
    double price;
    };

int main () {
    struct Book myBook;
    strcpy(myBook.title,"sherlock Holmes");
    strcpy(myBook.author, "Arther conan Doyle");
    myBook.price = 15.99;

    printf("Book Title ; %s\n",myBook.title);
    printf("Author : %s\n", myBook.author);
    printf("price : $%2f\n" ,myBook.price);


}
