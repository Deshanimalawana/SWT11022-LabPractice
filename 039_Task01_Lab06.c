#include <stdio.h>

int main(){
    int units;
    float rate;


    printf("Enter units:-\n");
    scanf("%d",&units);

    if(units <= 50){
        rate=units*0.5;
            printf("Rate is:-%f\n", rate);
        }if(units <= 100){
            rate= (((units-50) * 0.75) + 50*0.5) ;
            printf("Rate is:-%f\n", rate);
        }if(units <= 200){
            rate =((units-100)*1.20 + (50*0.5+50*0.75));
            printf("Rate is:-%f\n", rate);
        }else{
            rate= ((units-250)*1.50) + ((50*0.5)+(100*0.75)+(100*1.20));
            printf("Rate is:-%f\n", rate);

        }

        return 0;


        }



