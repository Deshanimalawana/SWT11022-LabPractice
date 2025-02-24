#include<stdio.h>
int main(){

 float payrate;
 int workhour;

    printf("Enter your work hour:");
    scanf("%d",&workhour);

    printf("Enter your payrate:");
    scanf("%f",&payrate);

int salary=payrate*workhour;

printf("salary,%d",salary);

return 0;

}
