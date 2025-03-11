#include<stdio.h>
int main(){
int number1;
int number2;
int number3;
int largest;
printf("Enter three numbers:");

scanf("%d, %d,%d", &number1, &number2 , &number3);

if(number1>=number2 && number1>=number3){
    printf("largest=%d", number1);

}
else if(number2>=number1 && number2>= number3){
    printf("largest=%d", number2);
}
else {
    printf("largest= %d", number3);
}
return 0;











}
