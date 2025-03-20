#include <stdio.h>
#include <stdlib.h>

int main()
{
  //FOR LOOP TO PRINT ODD NUMBERS FROM 1 TO 10
  for (int i =1;i<=10;i++){
      if(i%2==0){
        continue; //skip even numbers
      }
      printf("%d",i);
  }
    return 0;
}
