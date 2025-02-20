#include <stdio.h>
int main (){



struct book {
    char title[100];
    char author[50];
    double price;
};

    struct book book1 ={"how to  make tea  with  out  water", "gayan",3.01};

    printf("book details:\n");
    printf("title: %s\n", book1.title);
    printf("Author: %s\n",book1.author);
    printf("price : $ %.2f\n",book1.price);
    return 0;




}
