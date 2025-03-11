#include<stdio.h>
int main(){

int marks;

printf("Enter your marks:");
scanf("%d",&marks);


if(marks>=90){

    printf("Excellent");
}
else if(75<=marks && marks<=89){

printf("Very good.");

}
else if(50<=marks && marks<=74){

    printf("Good");
}
else{
    printf("Fail");
}
return 0;
}
