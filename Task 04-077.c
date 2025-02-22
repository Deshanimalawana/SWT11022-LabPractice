#include <stdio.h>
#include <string.h>
#include <stdlib.h>

  struct Book {
  char title[100];
  char author[50];
  double price;
  };

  int main() {
  struct Book myBook;

  strcpy(myBook.title, "The Catcher in the Rye");
  strcpy(myBook.author, "J.D. Salinger");
  myBook.price = 30.00;

  printf("Book Title:%s\n",myBook.title);
  printf("Author:%s\n",myBook.author);
  printf("Price:$%.2f\n",myBook.price);
  return 0;
}
