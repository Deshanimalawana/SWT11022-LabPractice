#include<stdio.h>
int main()
{

    int mark[2][5];
    int i, j;

     for(int i=0; i<2; i++){printf("Enter mark for student %d:\n", i+1 );
     for(j=0; j<5; j++){printf("subject %d:",j+1);
     scanf("%d",&mark[i][j]);}
        }

    printf("student marks :\n");
    for(i=0; i<2; i++){printf("student %d :",i+1);
    for(j=0; j<5; j++) printf(" %d ",mark[i][j]);}
    printf("\n");

    return 0;
}
