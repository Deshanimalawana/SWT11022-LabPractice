#include<stdio.h>
int main() {
    float sum=0;
    float num;
    float  average;
    int subject_marks[6];
    printf("enter your mark:");
    for(int n=0;n<6;n++){
        scanf("%f",&num);
    subject_marks[n]=num;
        
    }
    
    for(int i=0;i<6;i++){
        sum=sum+subject_marks[i];
         
        
    }
    printf("sum of array is:%.2f\n",sum);
    average=sum/6;
    printf("your average is :%.2f",average);
    return 0;
}