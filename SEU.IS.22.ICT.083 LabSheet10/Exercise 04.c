#include<stdio.h>
int main(){
char letter[10];
for (int i=0;i<10;i++){
    printf("Enter a letter [%d]:",i);
    scanf("\n%c",&letter[i]);
    }
    for(int i=0;i<10;i++){
    if (letter[i]>='A' && letter[i]<='Z'){
        printf("Letter [%d]: %c letter is upper case\n",i,letter[i]);
    }
    else if (letter[i]>='a' && letter[i]<='z'){
        printf("Letter [%d]: %c letter is lower case\n",i,letter[i]);
    }
    else {
        printf("Letter [%d]: %c not an alphabet\n",i,letter[i]);
    }
    }
return 0;
}
