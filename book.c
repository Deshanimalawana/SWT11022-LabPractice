#include <stdio.h>
#include <stdlib.h>

int main()
{
    struct book{
char title[100];
char author[50];
double price;
};
struct book mybook;
strcpy(mybook.title,"The Catcher in the Rye");
strcpy(mybook.author,"j.d.Salinger");
mybook.price=12.99;

printf("mybook.title: %s\n", mybook.title);
printf("mybook.author: %s\n", mybook.author);
printf("mybook.price: $%.2f\n",mybook.price);

    return 0;
}
