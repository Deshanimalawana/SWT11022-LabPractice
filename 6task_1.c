#include<stdio.h>

int main(){
  int unit;
  float total;
  printf("enter number of units:");
  scanf("%d" ,&unit);

  if(unit<=50){
     total=(unit*0.50);
  }
  else if(unit<=150){
    total=50*0.50+(unit-50*0.75);
  }
  else if(unit<=250){
    total=50*0.50+(100*0.75)+(unit-150*1.20);
  }
 else{
    total=50*0.50+(100*0.75)+(100*1.20)+(unit-250*1.50);
  }

printf("total of electricity bill: %.2f\n",total);

return 0;

}
