#include<stdio.h>

int main(){
  int dayofweek;
  printf("enter day of week:");
  scanf("%d",&dayofweek);

  switch(dayofweek){
        case 1:
            printf("monday\n");
            break;
        case 2:
            printf("tuesday\n");
            break;
        case 3:
            printf("wednesday\n");
            break;
        default:
            printf("other day\n");
    }

    return 0;
}
