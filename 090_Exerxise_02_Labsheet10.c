#include <stdio.h>
int main (){

int student_marks[6];
float average;
int sum=0;

printf("Enter student marks: ");
for(int i=0 ; i<=5 ; i++){
    scanf("%d",&student_marks[i]);
    sum+=student_marks[i];
}
printf("You entered marks are: ");
for(int i=0 ; i<=5 ; i++){
    printf("%d ",student_marks[i]);
}
average=sum/6.0;
printf("\nAverage is: %.2f\n",average);

return 0;
}

