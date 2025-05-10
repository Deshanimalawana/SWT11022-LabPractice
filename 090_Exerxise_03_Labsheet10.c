#include <stdio.h>
int main (){

float marks[10];
float max;

printf("Enter marks for 10 students: ");
for(int i=1 ; i<=10 ; i++){
    scanf("%f",&marks[i]);
}
printf("You entered marks are: ");
for (int i=1 ; i<=10 ; i++){
    printf("%.2f ",marks[i]);
}
max=marks[0];
for(int i=0 ; i<=10 ; i++){
    if(marks[i]>max){
        max=marks[i];
    }
}
printf("\nThe maximum mark you entered is: %.2f\n",max);

return 0;
}

