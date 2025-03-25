#include<stdio.h>
int main () {
   int even = 0;

   for(int i=1; ; i++){
     if (i%2==0){
        even = i;
        break;  }
    }
    printf("the first even number is : %d\n",even);
return 0;
}
