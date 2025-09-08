#include <stdio.h>
int main () {
int units;
float Total;
printf("Enter number of units:");
scanf("%d",&units);

if(units<=50){
    Total=(units*0.50);
}
else if (units<=150){
    Total=(50*0.50)+(units-50)*0.75;
}
else if (units<=250){
    Total=(50*0.50)+(100*0.75)+(units-150)*1.20;
}
else if(units>250){
    Total=(50*0.50)+(100*0.75)+(100*1.20)+(units-250)*1.50;
}
printf("Total of electricity Bill=%.2f\n",Total);

return 0;
}
