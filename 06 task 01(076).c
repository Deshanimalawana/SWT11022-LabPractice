#include<stdio.h>
int main(){

int units,total;
float rate;

printf("Give the number of units:\n");
scanf("%d",&units);

if(units<=50){
    total=units*0.50;
    printf("total:%d");

    }

    else if(units <= 150){

    total = units*(total+0.75);
    printf("total:%d");

    }
    else if(units <= 250){

    total= units*total+1.20;
    printf("total:%d");

    }
  else {

    total=units*total+1.50;
    printf("total:%d");

    }
return 0;
}
