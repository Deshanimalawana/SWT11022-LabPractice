#include <stdio.h>
#include <stdlib.h>

int main()
{
   int array_num[10];
   int*ptr = array_num;
   int i;
   int sum = 0;


   printf("Enter the array number here :");
    for (i=0; i<10; i++){
    scanf("%d",ptr+i);
    sum += *(ptr + i);
   }

   printf("The sum value is:%d",sum);
    return 0;
}
