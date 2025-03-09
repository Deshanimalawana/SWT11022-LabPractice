#include<stdio.h>

int main()
{
    
    int a=5, b=10, c=15, large_number;
    
    large_number= (a>b) ? ((a>c) ? a:b) : ((b>c) ? a : c);
    printf("Large number is %d\n\n", large_number);
    
    int average =(a+b+c) / 3;
    printf("Average is %d\n", average);
    
    
    
    
    
    
    
    return 0;
}