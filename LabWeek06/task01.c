#include <stdio.h>
int main(){
float first = 0.5;
float second1 = 0.75;
float second2 = 1.20;
float above250 = 1.5;
float out;
int unit;

printf("Enter the unit:- ");
scanf("%d",&unit);
if (unit<=50){
    out = first * 50;
    printf("%.2f",out);
}else if (unit<=150){
    out = (first * 50) + (unit - 50)*second1;
    printf("%.2f",out);
}else if (unit<=250){
    out = (first * 50) + (second1 * 100) + (unit - 150)*second2;
    printf("%.2f",out);
}else{
    out = (first * 50) + (second1 * 100) + (second2 * 100) + (unit-250)*above250;
    printf("%.2f",out);

}


}
