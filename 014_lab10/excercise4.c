#include <stdio.h>
int main(){
    char input[10];
    int i;
    printf("Enter 10 Character input:\n");
    for(i=0; i<10; i++){
        printf("input %d : ",i +1);
        scanf(" %c",&input[i]);
    }

    for(i=0; i<10; i++){
        if(input[i]>= 'A' && input[i]<='Z'){
            printf("%c is an uppercase letter\n",input[i]);
        }else if(input[i]>= 'a' && input[i]<='z'){
            printf("%c is a lowercase letter\n",input[i]);
        }else{
            printf("%c is not a letter\n",input[i]);
        }
    }

return 0;
}
