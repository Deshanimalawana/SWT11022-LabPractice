#include<stdio.h>
int main(){
char ch [10];

for(int i=0;i<10;i++){
    printf("enter  your word:");
    scanf(" %c",&ch[i]);
    printf("character %d is %c\n",i+1,ch[i]);
    
    
    
}
for(int n=0;n<10;n++){
    if(ch[n]>='A'&& ch[n]<='Z'){
        printf("character %c  is uppercase\n",ch[n]);
        
    }
    else if(ch[n] >='a'&& ch[n]<='z'){
        printf("character %c is Lowercase\n",ch[n]);
    }          
    else{
        printf("you didn't enter a character");
        
    }
}
    
    
    
    
    
    
}