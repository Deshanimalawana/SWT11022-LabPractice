#include <stdio.h>
#include<ctype.h>
int main (){

char text[10];

printf("Enter 10 characters: ");
for(int i=0;i<10;i++){
    scanf(" %c",&text[i]);
}
printf("UpperCase or LowerCase:\n");
for(int i=0;i<10;i++){
    if(isupper(text[i])){
       printf("%c is Upper-Case\n",text[i]);
       }else if(islower(text[i])){
           printf("%c is Lower-Case\n",text[i]);
       }else{
            printf("%c is not a character\n",text[i]);
       }
}
return 0;
}


