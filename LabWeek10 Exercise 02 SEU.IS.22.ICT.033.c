#include <stdio.h>
int main(){

int sub[6];
int sum=0;

printf("Enter subject marks\n");
for(int i=1;i<=6;i++){
    printf("enter %d subject mark:",i);
    scanf("%d",&sub[i]);
    sum+=sub[i];
}
float avg=sum/6;
printf("average of subjects marks:%.2f",avg);
return 0;
}
