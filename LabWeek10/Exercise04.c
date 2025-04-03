#include <stdio.h>
int main(){
    char alphabet[10];
    char lower_case[]="abcdefghijklmnopqrstuvwxyz";
    char upper_case[]="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    for(int a = 0; a<10;a++){
        printf("Enter character number %d:",a+1);
        scanf(" %c",&alphabet[a]);
    }
for(int b = 0;b<10;b++){
    for(int i = 0;i<25;i++){
        if (alphabet[b]==lower_case[i]){printf("character number %d is lowercase\n",b+1);}
        else if(alphabet[b]==upper_case[i]){printf("character number %d is uppercase\n",b+1);}
       }
    }
}
