#include<stdio.h>
int main(){
 int age[5]={21,21,23,24,25};
 age[1]=27;

 printf("Updated ages 5 students:\n");
 for(int i=0; i<5; i++){
    printf("Student %d: %d years\n",i+1,age[i]);

 }

return 0;
}
