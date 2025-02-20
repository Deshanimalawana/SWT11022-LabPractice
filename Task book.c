#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Book {
    char title[100];
    char author[50];
    double price;

};
int main(){
    struct Book myBook;

    strcpy(myBook.title,"Time Machine");
    strcpy(myBook.author," H.G. Wells");
    myBook.price = 350.50;

    printf("Book Title:%s\n",myBook.title);
    printf("Book Author:%s\n",myBook.author);
    printf("Price:$%.2f\n",myBook.price);

return 0;
}
