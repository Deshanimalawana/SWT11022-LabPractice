#include<stdio.h>
int main(){
   int marks;
   char*grade;


   printf("Enter Marks:");
   scanf("%d",& marks);

   if(marks >= 90){
    grade = "Excellent";
    }else if(marks > 75){
    grade = "Very Good";
    }else if(marks > 50){
    grade = "Good";
    }else{
    grade = "Fail";
    }

    printf("Grade:%s\n", grade);
    return 0;
}
