#include <stdio.h>
int main(){
    float num[10];
    float numin;
    float checkingnum;
    int sw=0;
    for(int i=0;i<10;i++){
        printf("Enter the Number:");
        scanf("%f",&numin);
        num[i]=numin;}
    printf("Enter the Number for CHECKING NUMBER:");
    scanf("%f",&checkingnum);
    for(int a=0;a<10;a++){
       if(checkingnum == (num[a])){
            sw = 1;
            break;
       }
    }
    if(sw == 1){
        printf("The number %f is present in the list",checkingnum);
    }else{
        printf("The number %f is not present in the list",checkingnum);}

}


