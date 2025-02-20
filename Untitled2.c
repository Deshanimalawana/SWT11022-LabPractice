#include <stdio.h>
#include <string.h>
#include<stdlib.h>
int main(){

struct Book{
char title[100];
char author[50];
double price;

};

struct Book mybook;
strcpy(mybook.title,"Madolduwa");
strcpy(mybook.author,"Martin Wikramasingha");
mybook. price = 550.50;


printf("Book title:%s\n",mybook.title);
printf("Author:%s\n",mybook.author);
printf("Price:%f\n",mybook.price);



return 0;
}
