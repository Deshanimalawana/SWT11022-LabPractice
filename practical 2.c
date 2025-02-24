#include <stdio.h>
#include <string.h>
struct Book{
  char title[100];
  char author[50];
  double price;
};
int main(){
  struct Book myBook;
  strcpy (myBook.title, "sherlock Homes");
  strcpy (myBook.author, "Arther Conan Doyle");
  myBook.price=15.99;

  printf("Book Title:%s\n",myBook.title);
  printf("Author:,%s\n",myBook.author);
  printf("Price:%2f\n",myBook.price);
return 0;
}
