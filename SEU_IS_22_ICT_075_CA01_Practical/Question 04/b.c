#include <stdio.h>

int main(){
    float side1,side2,side3;
    printf("Enter side 1 of the Triangle ");
    scanf("%f",&side1);
    printf("Enter side 2 of the Triangle ");
    scanf("%f",&side2);
    printf("Enter side 3 of the Triangle ");
    scanf("%f",&side3);

    if(side1 == side2 == side3){
        printf("This is Equilateral Triangle");
    }else if((side1 == side2) || (side2==side3) || (side1==side3)){
        printf("This is a Esosceles Triangle");
    }else{
        printf("This is a Scalene Triangle");
    }

}
