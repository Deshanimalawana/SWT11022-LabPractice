#include <stdio.h>
int main(){
do{
    printf("enter a positive number:");
    scanf("%d",&input);
}while (input<=0);
printf("you entered a positive number: %d\n",input);
return 0;
}
