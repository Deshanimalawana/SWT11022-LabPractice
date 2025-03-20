#include <stdio.h>
int main(){
    int num;
    while (1){
        printf("Enter the Number: ");
        scanf("%d",&num);

        if (num<0){
          break;
        }
    }
    printf ("user enters a negative number:%d\n",num);
}
