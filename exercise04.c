#include<stdio.h>
#include <string.h>
int main(){
    struct Book{
    char title[100];
    char author[50];
    double price;
    };

    struct Book myBook;
    strcpy(myBook.title,"The Great Gatsby");
    strcpy(myBook.author,"F. Scott Fitzgerald");
    myBook.price = 15.56;

    printf("Book Tile:%s\n",myBook.title);
    printf("Author:%s\n",myBook.author);
    printf("Price:$%.2f\n",myBook.price);
    return 0;
}
