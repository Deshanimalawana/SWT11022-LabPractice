#include <stdio.h>
int main () {
int age=55;
float income=50000.0;
scanf("%d",&age);
if (age>=60){
    if(income<60000.0){
        printf("You are eligible for tax deduction.\n");

    } else{
         printf("You are not eligible for tax deduction.\n");
    }
}else {
   printf("You are not eligible for tax deduction.\n");
   }
return 0;
}
