#include <string.h>
#include <stdio.h>
#include <stdint.h>
int main(){

    struct Book {
    char title[100];
    char author [50];
    double price;
    };

    struct Book mybook;
    strcpy(mybook.title,"A Bend in the River");
    strcpy(mybook.author,"V.S.Naipaul");
    mybook.price=50;



    printf("Book Title:%s\n",mybook.title);
    printf("Book Author:%s\n", mybook.author);
    printf("Price:$%.2f\n",mybook.price);
    return 0;
}
