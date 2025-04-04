#include <stdio.h>
int main(){
    float num[10];
    float max;
    int x;

    printf("enter the 10 float numbers :\n");
    for(x = 0; x<10; x++){
       printf("%d",x+1);
       scanf("%f",&num[x]);}

     max = num[0];

     for(x = 1; x < 10; x++){
        if(num[x] > max){
           max = num[x];
        }
}

     printf("The maximum is : %.2f\n",max);
return 0;
}
