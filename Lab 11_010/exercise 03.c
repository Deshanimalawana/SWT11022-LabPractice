#include<stdio.h>
int main()
{

    char original[10]={'A','B','C','D','E','F','G','H','I','J'};
    char duplicate[10];

    for(int i=0; i<10; i++){duplicate[i]=original[i];}

    printf("Original Array\n",original);
     for(int i=0; i<10; i++){printf(" %c ",original[i]);}

     printf("\n Duplicate Array\n",duplicate);
     for(int i=0; i<10; i++){printf(" %c ",duplicate[i]);}

    /* printf("\n");*/

 return 0;
}
