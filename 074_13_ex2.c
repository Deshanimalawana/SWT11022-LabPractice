#include<stdio.h>
void findmaxmin( int a,int b,
    int *max,int *min){

    if(a>b){
        *max=a;
        *min=b;
    }else{
        *max=b;
        *min=a;
    }

    };

int main()
{
    int x,y;
    int max_num,min_num;
    printf("enter the numbers:");
    scanf("%d %d",&x,&y);

    findmaxmin( x, y, &max_num, &min_num);

    printf("max values is :%d\n",max_num);
    printf("min values is :%d",min_num);

    return 0;

}
