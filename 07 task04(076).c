#include<stdio.h>
int main(){

int number;

while(1){
        printf("Enter your number:");
        scanf("%d",&number);
        if(number<=0){
        break;
        printf("You entered a positive number:%d\n",number);}

}

 printf("You entered a negative number:%d\n",number);



return 0;
}
