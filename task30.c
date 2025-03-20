#include<stdio.h>
int main()
{
    int unit,i;
    float bill=0;

    for(i=1; i<=10; i++){



        printf("Enter the units:");
        scanf("%d",&unit);
        if(unit>=50){
        bill=unit*0.5;
    }  else if(unit<=100){
        bill=50*0.5+((unit-50)*0.75);
    }else if(unit<=250){
        bill=50*0.5+100*0.75+((unit-150)*1.20);
    }else{
        bill=50*0.5+100*0.75+100*1.20+((unit-250)*1.5);
    }
    printf( "bill is: %.2f\n",bill);
    }
    return 0;

}
