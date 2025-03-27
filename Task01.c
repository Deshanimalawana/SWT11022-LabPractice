#include<stdio.h>
int main(){
 int units;
 printf ("Enter the units :" );
 scanf("%d" ,&units);

 if (units<=50){
    float Total = units * 0.50;
    printf("Total : %.2fRs\n",Total);
    }
else if (units<=100){
    float Total = units * 0.75;
    printf("Total : %.2fRs\n",Total);
    }
 else if (units<=200){
    float Total = units * 1.20;
    printf("Total : %.2fRs\n",Total);
 }

else{
    float Total = units * 1.50;
    printf("Total : %.2fRs\n",Total);
}
return 0;




}
