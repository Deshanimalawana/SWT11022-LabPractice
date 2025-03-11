#include <stdio.h>
int main(){
   int num1, num2, num3, largest;
       printf("Enter three number : ");
       scanf("%d %d %d", &num1,&num2,&num3);

       largest=num1;
       if(num2 > largest)
            largest = num2;
       if(num3 > largest)
            largest = num3;

           printf("The largest number is %d.\n", largest);
}
