#include<stdio.h>
int main(){
    int unit;
    float Rate;


    printf("Enter your Electricity Unit:");
    scanf("%d",&unit);

    if (unit < 50){
        Rate = unit * 0.50;
        printf("Your Total Bill:%f",Rate);
    }
    else if ( unit < 150) {
        Rate = ((50 * 0.50) + (( unit - 50) * 0.75 ));
    }
    else if ( unit < 250 ) {
        Rate = (50 * 0.50 ) + ( 100 * 0.75 )+(unit - 150 ) * 1.20;
    }
    else {
        Rate = ((50 * 0.50) + ( 100 * 0.75) + (100 * 1.20))+ (unit - 250 ) * 1.50;
    }

    printf("Total Bill:%.2f",Rate);

    return 0 ;


}
