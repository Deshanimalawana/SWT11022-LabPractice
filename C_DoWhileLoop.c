#include <stdio.h>
int main(){
 int i=0;
 int input;
 printf("Enter Whole Number:");
 scanf("%d",&input);

 do{
    if(input>0){
         printf("Positive Number:%d\n",input);
         break;
    }else{
         printf("Negative Number:%d\n",input);
         printf("It's Negative Number retry...\n");
         printf("Enter Whole Number:");
         scanf("%d",&input);
         i=i+1;
    }

 }          //code want to executed

 while(i<10);//condition

 return 0;
}
