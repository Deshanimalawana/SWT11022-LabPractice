#include<stdio.h>
int main(){
    int age=62;
    int income=20000;
    if(age>=60){
            if(income<=60000){
                printf("eligible for tax deduction");
            }else{
                printf("you are not eligible for tax deduction");}
    }else{
        printf("not eligible for tax");
    }
    return 0;


}
