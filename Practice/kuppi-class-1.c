#include <stdio.h>

int main(){
    FILE *fileopen;
    fileopen = fopen("test.txt","a");
    char name[30];
    printf("Enter your name: ");
    scanf("%s",&name);
    fprintf(fileopen,"%s",name);    
}