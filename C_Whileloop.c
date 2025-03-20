#include <stdio.h>
int main(){
 int i=0;
 int num[9]={1,2,3,4,5,6,7,8,9,10};
 while(i<9){
      if(num[i]%2==0){
        printf("%d",num[i]);
      }
      //printf("%d\n",num[i]);
      i=i+1;
}

 return 0;
}
