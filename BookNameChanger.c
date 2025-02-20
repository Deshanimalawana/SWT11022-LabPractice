#include <stdio.h>
#include <string.h>

struct BOOKS {
    char title[100];
    char author[50];
    double price;
};
int main(){
    struct BOOKS B1 = {"Journey of Souls","Michael Newton",200.80};
    printf("The book title is %s and its author`s name is %s and the price of this book is %.2lf\n",B1.title,B1.author,B1.price);
    char changedName[100];
    printf("Lets change book name : ");
    scanf("%s",&changedName);
    strcpy(B1.title,changedName);
    printf("Book name has change to %s successfully ",B1.title);
}
