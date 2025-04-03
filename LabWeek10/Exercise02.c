#include <stdio.h>

int main(){
int sub_marks[6];
int average;

for(int i=0;i<6;i++){
    printf("Enter the marks for the student number %d: ",i+1);
    scanf("%d",&sub_marks[i]);
    average+=sub_marks[i];
}
for(int a=0;a<6;a++){
    printf("Student %d marks: %d\n",a+1,sub_marks[a]);
}
printf("Average student marks: %d",average/6);
return 0;
}
