#include<stdio.h>
  int main(){
    float units;
    float bill;

    printf("Enter no of Units: \n");
    scanf("%f",&units);

    if (units<=50) {
        bill = units*0.5;
        printf("Your bill amount : %f \n",bill);
    }if (units<=150){
        bill =(((units-50)*0.75)+ (50*0.5));
        printf("Your bill amount : %f \n",bill);
    }if (units<=250){
        bill =(((units-150)*1.20)+ (50*0.5)+(100*0.75));
        printf("Your bill amount : %f \n",bill);
    }else{
        bill =(((units-250)*1.50)+ (50*0.5)+(100*0.75)+(100*1.20));
        printf("Your bill amount : %f \n",bill);
    }

    return 0;




  }
