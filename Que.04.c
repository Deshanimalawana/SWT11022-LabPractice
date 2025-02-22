#include <stdio.h>
#include <string.h>

struct Book{
   char tittle[100];
   char author[50];
   double price;
   };
int main(){
struct Book myBook;
strcpy (myBook.tittle,"Madol duwa");
strcpy (myBook.author,"Martin Wickramsinghe");
myBook.price = 15.99;

printf("Book Tittle:%s\n",myBook.tittle);
printf("Auther:%s\n",myBook.author);
printf("Price:%2f\n",myBook.price);

return 0;
}
