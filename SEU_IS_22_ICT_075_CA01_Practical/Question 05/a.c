#include <stdio.h>

int main(){
    int Payment_method, money;
    printf("(1) for Card Payment\n(2) for Cash Payment\n Select your Payment method: ");
    scanf("%d",&Payment_method);
    printf("Enter the Final Amount: ");
    scanf("%d",&money);
    if(Payment_method == 1 ){
        if(money>=2000){
            printf("Final price with the discount of 15%: %.2f",money-(money*0.15));
        }else{
            printf("Final price with the discount of 10%: %.2f",money-money*0.10);
            }
    }else if(Payment_method == 2){
        if(money>=2000){
            printf("Final price with the discount of 5%: %.2f",money-money*0.05);
        }else{
            printf("There is no discount: %d",money);
        }

    }else{
        printf("Wrong Payment Method");
    }

}


