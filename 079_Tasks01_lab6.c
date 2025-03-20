#include<stdio.h>
int main(){
    int units;
    printf("Enter Number of Units");
    scanf("%d",&units);
    float rate;

    if(units<=50){
        rate=units*0.50;
        printf("Rate(Rs.):%f",rate);
    }if(units<=150){
        rate=((units-50)*0.75) + (50*0.50);
        printf("Rate(Rs.):%f",rate);
    }if(units<=250){
        rate=((units-150)*1.20) + ((50*0.50)+(100*0.75));
        printf("Rate(Rs.):%f",rate);
    }else{
        rate=((units-250)*1.50) + ((50*0.50)+(100*0.75)+(100*1.20));
        printf("Rate(Rs.):%f",rate);
}
return 0;
}
