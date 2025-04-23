#include<stdio.h>
int main()
{
    float arr[10];
    float searchnum;
    int found=0;

    printf("Enter 10 floating point numbers:\n");
    for(int i=0; i<10; i++){
    scanf(" %f",&arr[i]);}

    printf("Enter number to search:");
    scanf("%f",&searchnum);

    for(int i=0; i<10; i++){if(arr[i]==searchnum){found = 1; break;}
    }
    if(found){printf("Number is present in the array\n",searchnum);}

    return 0;
}
