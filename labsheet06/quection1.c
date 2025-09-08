#include<stdio.h>
int main(){
int unit ;
float bill;

printf("Enter the number of units:");
scanf("%d", &unit);

if(unit<=50){
    bill= unit * 0.50;
}
else if(unit<=150){
    bill= unit * 0.75;
}
else if(unit<=250){
    bill= unit * 1.20;
}
else {
    bill= unit * 1.50;
}
printf("Total Electricity bill : Rs %.2f\n", bill);

return 0;



}
