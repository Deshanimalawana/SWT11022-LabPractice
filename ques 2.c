#include<stdio.h>
int main(){
struct book {
char title[100];
char author[50];
double price;
};
struct book mybook;
strcpy(mybook.title,"the secret");
strcpy(mybook.author,"J.D.salinger");
mybook.price-15.99;
printf("book title : %s\n",mybook.title);
printf("Author : %s\n",mybook.author);
printf("price : $%.2f\n",mybook.price);
return 0;
}
