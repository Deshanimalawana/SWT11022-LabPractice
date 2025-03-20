#include <stdio.h>
int main(){
int numofunits;
float rate;
for(int i=1;i<=10;i++){
printf("enter your units:");
scanf("%d",&numofunits);

if(numofunits<=50){
      rate=numofunits*0.50;
}else if(numofunits<=150){
      rate=50*0.50+(numofunits-50)*0.75;
}else if(numofunits<=250){
      rate=50*0.50+100*0.75+(numofunits-150)*1.20;
}else {
      rate=50*0.50+100*0.75+100*1.20+(numofunits-250)*1.50;
     }

     printf("Total rate:%.2f\n",rate);
}
     return 0;
}
