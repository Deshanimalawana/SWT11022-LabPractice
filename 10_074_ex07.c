#include<stdio.h>
int main()
{
    char letter[10];



    for (int i=0; i<10; i++){
        printf("character %d: \n" ,i);
        scanf("%s",&letter[i]);
    }
    for(int i=0; i<10; i++){
        if(letter[i]>='A' && letter[i]<='Z'){
            printf("The letter is uppercase\n",letter[i]);
        }else{
            printf ("The letter is lower case\n",letter[i]);
            }


    }
    return 0;
}
