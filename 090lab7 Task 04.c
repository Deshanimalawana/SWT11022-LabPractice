#include <stdio.h>
int main (){
int num;

while(1){
    printf("Enter a Negative Number to exit: ");
    scanf("%d",&num);
    if (num<0){
        printf("\nThe Negative number you entered: %d\n",num);
        break;}
}
return 0;
}
