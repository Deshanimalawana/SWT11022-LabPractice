#include <stdio.j>
int main()
{
    struct book {
    char title[100];
    char author[50];
    double price;
    };

    struct book mybook = ("dragon heart"), "Punsara", 3.01};

    printf("book details:\n");
    printf("title:%s\n",mybook.title);
    printf("author:%s\n",mybook.author);
    printf("price:%s\n",mybook.price);
    return 0;

}
