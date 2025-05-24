#include <stdio.h>

int main()

{
    int abc;
     while(abc>=0){
        printf("Enter a number:");
        scanf("%d",&abc);

      if(abc<0){
            break;
        }
     }
    return 0;
}
