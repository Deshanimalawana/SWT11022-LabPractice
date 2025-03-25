#include<stdio.h>
int main (){
  int x;
  for(x = 1;x<=20;x += 2){
        if(x%2 ==1){
            continue;}
        else{
            printf("%d\n",x);}
}

return 0;
}
