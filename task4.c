#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main (){

struct book {
char title[100];
char author[50];
double price;
};
struct book mybook;
strcpy(mybook.title,"maymaralmala");
strcpy(mybook.author,"don arthel");
mybook.price=57.89;

printf("book title: %s\n",mybook.title);
printf("book author: %s\n",mybook.author);
printf("book price: %.2f\n",mybook.price);

return 0;
}
