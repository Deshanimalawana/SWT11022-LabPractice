#include<stdio.h>
int main(){
    int student_marks[10],max=0,value;

    printf("enter your  mark:");
    for(int i=0;i<10;i++){
        scanf("%d",&value);
        student_marks[i]=value;
        
    }
    for (int n=0;n<10;n++){
        if(student_marks[n]>max){
            max=student_marks[n];
        }
        
    }
    printf("your max number is :%d",max);
    
    
    
    
}