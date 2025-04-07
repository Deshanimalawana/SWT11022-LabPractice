#include<stdio.h>
int main(){
 char letters[10];

 printf("enter 10 letters:\n");
 for(int i=0; i<10; i++){printf("character %d:",i+1);
 scanf("%s",&letters[i]);}

 printf("character analysis:\n");
 for(int i=0; i<10; i++){
    if (letters[i]>= 'A' &&letters[i]<='Z'){printf("uppercase letter\n",letters[i]);}
    else if (letters[i]>= 'a' &&letters[i]<='z'){printf("lowercase letter\n",letters[i]);}
    else {printf("Not an alphabet letter\n",letters[i]);}

 }
 return 0;


}
