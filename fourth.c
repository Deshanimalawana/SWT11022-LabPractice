#include <stdio.h>
#include <string.h>
int main () {
    struct Book {
    char Title [100];
    char author [50];
    double price ;
    };

    struct Book myBook;
    strcpy(myBook.Title,"The common man");
    strcpy(myBook.author,"K.W.Stephen");
    myBook.price=880.96;

    printf("Book Title:%s\n",myBook.Title);
    printf("Book author:%s\n",myBook.author);
    printf("Book price:%.2f\n",myBook.price);

}
