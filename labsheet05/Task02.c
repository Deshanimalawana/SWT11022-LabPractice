#include<stdio.h>
int main(){
int marks;
printf("Enter your marks:");
scanf("%d", &marks);
if(marks>=90){
    printf("Grade: Excellent\n");
}
else if(marks>=75){
    printf("Grade: Very Good\n");

}

 else if(marks>=50){
    printf("Grade: Good\n");
}
else{
    printf("Grade: Fail");
}
return 0;
}
