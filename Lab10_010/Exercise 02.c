#include<stdio.h>
int main(){
int marks[6];
float average;

for (int i=0;i<6;i++){printf("enter marks for student %d:",i+1);
scanf("%d",&marks[i]);
average+= marks[i];
}
average=average/6;
printf(" student marks = ");
for(int i=0;i<6;i++){printf(" %d ",marks[i]);}
    printf("Average is=%.2f \n",average);
return 0;
}
