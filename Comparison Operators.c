#include<stdio.h>
int main(){
         int x = 10, y = 4;
         int isGreaterThan = (x > y);
         int isEqual = (x == y);
         int isnotEqual = (x != y);

         printf("Is x greater than Y? %s\n",isGreaterThan ? "yes" : "No");
         printf("Is x IsEqual than Y? %s\n",isEqual ? "yes" : "No");
         printf("Is x IsnotEqual than Y? %s\n",isnotEqual ? "yes" : "No");
         return 0;
         }
