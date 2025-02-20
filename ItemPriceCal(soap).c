#include <stdio.h>
int main(){

    char message[] = "How many soap items you have been purchase?";
    printf("%s : ", message);
    int quantity = 0;
    scanf("%d",&quantity);
    double priceForOneItem = 200.55;
    double TotalPrice = quantity * priceForOneItem;
    printf("you have been purchased soap items Total of %.2lf LKR",TotalPrice);
    return 0;
}
