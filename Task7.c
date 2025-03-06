#include <stdio.h>
#include <string.h>

struct Book {
    char title[150];
    char author[80];
    double price;
};

int main(){
    struct Book myBook1;

    strcpy(myBook1.title, " The Woman in the Window");
    strcpy(myBook1.author, "A.J. Finn");
    myBook1.price = 200.50;

    printf("Book Title %s", myBook1.title);
    printf("Book Author %s", myBook1.author);
    printf("Price %.2f \n", myBook1.price);

    return 0;
}