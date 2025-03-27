#include<stdio.h>
int main (){
int Number ;
printf("Enter your Number:");
scanf("%d",&Number);
if ((Number % 2) == 0){
    printf("Your Number is even:%d",Number);

}else{
printf("You number is odd:%d",Number);
}
return 0;
}
