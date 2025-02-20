#include <st.h>
#include <stdio.h>

struct book{
    char titale [100];
    char author [50];
    double price;
};

int main () {
    struct Book myBook;
    strcpy (myBook.title, "Sherlock Homes");
    strcpy (myBook.author, "Arther Conan Doyle");
    myBook.price = 15.99;

    printf("Book Title: %s\n", myBook.title);
    printf("Arther: %s\n", myBook.auther);
    printf("Price: %s\n", myBook.price);
}

