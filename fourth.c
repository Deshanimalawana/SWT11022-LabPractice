#include <stdio.h>
#include <string.h>

struct Book{
   char tittle[100];
   char author[50];
   double price;
   };
int main(){
struct Book myBook;
strcpy (myBook.tittle,"senkottan");
strcpy (myBook.author,"mahinda prasad masimbula");
myBook.price = 150;

printf("Book Tittle:%s\n",myBook.tittle);
printf("Auther:%s\n",myBook.author);
printf("Price:%2f\n",myBook.price);

return 0;
}
