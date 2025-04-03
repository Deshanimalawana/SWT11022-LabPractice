#include<stdio.h>
int main(){
   char letters[10];
   printf("Enter Characters\n");

   for (int i=0;i<10;i++){
     printf("Character %d:",i+1);
     scanf("%s",&letters[i]);
   }

  printf("\n Character Analysis:\n");
   for(int i=1;i<10;i++){
    if(letters[i] >= 'A'&&letters[i] <= 'Z')
    {
        printf("%c is an Uppercase letter\n",letters[i]);

    }else if(letters[i]>= 'a'&& letters[i]<='z')
    {
        printf("%c is an Lowercase  letter\n",letters[i]);
    }else{
        printf("%c is not an alphabet\n",letters[i]);

    }




   }







}
