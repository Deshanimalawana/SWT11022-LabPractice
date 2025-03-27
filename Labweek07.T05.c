#include <stdio.h>
 int main(){
  for (int i = 1; i <= 20; i=i+1){
    if (i % 2 == 1){
        continue;
    }
    printf("%d",i);
  }

  return 0;


 }
