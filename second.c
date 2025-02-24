#include <stdio.h>
#include <strings.h>

struct book {
    char title[100];
    char author[50];
    double price;

};

int main() {
    struct book mybook;
    strcpy(mybook.title, "The Catcher in the Ray");
    strcpy(mybook.author, "J.D. Salinger");
    mybook.price=12.99;

    printf("book title: %s\n",mybook.title);
    printf("author: %s\n",mybook.author);
    printf("price: $%.2f\n",mybook.price);
    return 0;
}
