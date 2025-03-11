#include<stdio.h>

int main(){
int marks;

printf("Enter your marks: ");
scanf("%d", &marks);

if(marks>=90){
    printf("Grade: Excellent");
}
else if(marks>=75 && marks <=89){
    printf("Grade: Very good");
}
else if(marks>=50 && marks<=74){
    printf("Grade: Good");
}
else{
    printf("Grade: fail");
}
}
