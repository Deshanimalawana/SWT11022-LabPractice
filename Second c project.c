#include <stdio.h>
int main (){
    float Price = 59.99;
    int quantity = 0;
    scanf("%d",&quantity);
    float Total = Price*quantity ;
    printf("Total Price:%.2f\n",Total);
    return 0;
}
