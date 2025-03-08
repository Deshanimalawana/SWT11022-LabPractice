#include <stdio.h>
int main () {
   int X = 18;
   int Y = 5;

   int ANDoperation = X & Y;
   int ORoperation = X | Y;
   int XORoperation = X ^ Y;

   printf(" X AND Y is: %d\n",ANDoperation);
   printf ("X OR Y is : %d\n",ORoperation);
   printf ("X XOR Y is : %d\n\n\n",XORoperation);


   printf(" Prefix Increment X and Y \n");
   printf("value of  X is: %d\n", X );
   printf ("value of Incremented X is : %d\n",++X);
   printf("Value of  Y is : %d\n", Y );
    printf ("value of Incremented Y is : %d\n\n",++Y);
   printf("Prefix Decrement X and Y\n");
   printf("value of  X is:%d\n ",X);
    printf ("value of Decremented X is : %d\n",--X);
   printf("value of Y is : %d\n",Y);
    printf ("value of Decremented Y is : %d\n\n\n",--Y);

   printf ("Postfix Increment X and Y \n");
    printf("Value of X  is : %d\n", X++ );
    printf ("value of Incremented X is : %d\n",X);
    printf("Value of Y  is : %d\n", Y++ );
    printf ("value of Incremented Y is : %d\n\n",Y);
    printf("Postfix decrement X and Y\n");
     printf("Value of X  is : %d\n", X-- );
      printf ("value of Decremented X is : %d\n",X);
      printf("Value of Y  is : %d\n", Y-- );
       printf ("value of Decremented Y is : %d\n\n",Y);


   //printf("Value of Y Increment is : %d\n", Y++ );

     //printf("value of Y  is : %d\n",Y--);
   //printf("Value of Y Decrement is : %d\n", Y );

   //printf("Prefix Decrement\n");
   //printf("value of X Decrement is : %d\n",X);
   //printf("value of X Decrement is : %d\n",--X);
   //printf("value of Y Decrement is : %d\n",Y);
 ;
  //printf("value of Y  is : %d\n",--Y);

   //printf("Value of X Decrement is : %d\n", X-- );


   return 0;




}
