#include<stdio.h>

int main(){
    int Units ;
    float Rate ;
        printf("Enter Your Number of Units:\n");
        scanf("%d",&Units);

        if(Units >= 50){
            Rate = Units * 0.5;
        }else if(Units >=150){
            Rate = (50 * 0.5) + ((Units - 50)*0.75);
        }else if(Units >= 250) {
            Rate = (50 * 0.5) + (100*0.75) + ((Units-150)*1.20);
        }else(Units > 250); {
            Rate = (50*0.50) + (100*0.75) + (100*1.20) + ((Units - 250)*1.50);
        }
        printf("The Total electricity bill is: Rs. %.2f\n",Rate);
        return 0;

}









