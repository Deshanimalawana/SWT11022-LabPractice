#include<stdio.h>
int main(){
int age=35;
float income=50000.0;
if (age>=60){
    if(income<60000.0){
        printf("Eligible for a text deduction");
        }
        else{
            printf("not eligible");
        }
}
else{
    printf("you are not eligible");
}
return 0;
}
