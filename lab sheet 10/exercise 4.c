#include<stdio.h>
int main (){
 char letters[10];
  printf("enter 10 character:\n");
   for (int x = 0;x < 10; x++){
    printf("character%d:", x + 1);
    scanf("%s", &letters[x]);
   }
  printf("\n character Analysis:\n");

   for(int x = 0;x <10; x++){
    if(letters[x] >= 'A'&& letters[x] <= 'Z'){
        printf("%c is an Uppercase letter\n",letters[x]);
        } else if (letters[x] >= 'a' && letters[x] <= 'z'){
        printf("%c is a lowercase letter\n",letters[x]);
        }else{
        printf("%c is not an alphabet\n",letters[x]);
        }
   }
   return 0;
}
