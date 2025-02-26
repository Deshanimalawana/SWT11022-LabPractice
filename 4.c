#include <stdio.h>

int main() {
    struct book {
        char title[100];
        char author[50];
        double price;
    };

    struct book mybook = {"Dragon Heart", "Punsara", 3.01};

    printf("Book Details:\n");
    printf("Title: %s\n", mybook.title);
    printf("Author: %s\n", mybook.author);
    printf("Price: %.2lf\n", mybook.price);

    return 0;
}
