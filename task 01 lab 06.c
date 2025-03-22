 #include<stdio.h>
int main(){
 int unit;

  printf("Enter the unit value");
  scanf("%d",&unit);
   if (unit <= 50){
    float unit1 = 0.50*unit;
    printf("Rate: %.2f", unit1);
    }else if (unit<=150){
     float unit2 = ((unit -50)*0.75)+(50*0.50);
     printf("Rate: %.2f",unit2);
    }else if (unit<=250){
     float unit3 = ((unit-150)*1.20)+(50*0.50)+(100*0.75);
     printf("Rate: %.2f ",unit);}
     else{
      float unit4 =((unit-250)*1.50)+(50*0.50)+(100*0.75)+(100*1.20);
      printf("Rate: %.2f",unit4);
     }


   return 0 ;
}
