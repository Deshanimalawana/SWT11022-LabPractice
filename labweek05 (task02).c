#include <stdio.h>
int main (){

int marks;
printf("Enter your marks:");
scanf("%d",&marks);

if (marks>=90){
    printf("Grade: Excellent");
}
else if (marks>=75){
    printf("Grade: Very Good");
}
else if (marks>=50){
    printf("Grade: Good");
}
else {
    printf("Fail");
}
return 0;
}
