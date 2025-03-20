#include <stdio.h>
int main() {

float unit,bill;
printf("Consumed unit:");
scanf("%f",&unit);

if(unit<=50) {
    bill=unit*0.5;
} else if (unit>50 && unit <=150) {
   bill=(50*0.5)+(unit-50) * 0.75;
}
else if(unit>150 && unit <=250) {
    bill=(50*0.5)+(100*0.75)+(unit-150) *1.20;

}
else if(unit>250) {
    bill=(50*0.5) +(100*0.75) +(100*1.20) +(unit-250) *1.50;
}

printf("Electricity bill: %.3f",bill);
return 0;
}
