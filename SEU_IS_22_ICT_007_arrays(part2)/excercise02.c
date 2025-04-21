#include<stdio.h>
int main(){
    float arr[10],number;
    
    printf("enter your  number:");
    for(int  i=0;i<10;i++){
        scanf("%f",&arr[i]);}
        int found=0;
    printf("enter  your  number to  check:");
    scanf("%f",&number);
    for(int i=0;i<10;i++){
        if(arr[i]==number){
            found=1;
            break;
        }
        
        
    }
    
   if(found){
       
       printf("your  number presents in  the  array");
   } 
    else{
        printf("your number doesn't present in   the array ");
    }
    
    
    
    return 0;
    
}