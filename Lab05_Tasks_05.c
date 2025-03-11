#include <stdio.h>
int main (){
    int number;
    printf ("Enter the number: ");
    scanf ("%d",&number);

    if (number>0){
        printf ("Positive number");
    }else if (number<0){
         printf ("Negative number");
    }else if (number == 0){
         printf ("Zero");
    }
    return 0;
}
