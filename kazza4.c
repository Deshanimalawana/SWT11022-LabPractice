#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main () {
    struct book {
char title[100];
char author[50];
double price;
};
struct book mybook;

strcpy(mybook.title,"the catcher in the rye");
strcpy(mybook.author,"J.D.Salinger");
mybook.price=12.99;
printf("book title:%s\n",mybook.title);
printf("author: %s\n",mybook.author);
printf("price:$%.2f\n",mybook.price);


return 0;

}
