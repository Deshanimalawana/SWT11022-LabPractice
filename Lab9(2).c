#include <stdio.h>
#include <stdlib.h>
    void printstars(int n){
     for (int i=0; i<n; i++)
        printf("*");
        printf("\n");
     }

int main()
{
    int number;
    printf("Example Input:");
    scanf("%d",&number);
    printstars(number);
    return 0;
}
