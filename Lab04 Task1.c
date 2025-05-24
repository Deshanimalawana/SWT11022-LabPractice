#include <stdio.h>

int main()
{
    int a=6, b=10, c=15;
    int agrterthanb=(a>b);
    int agrterthanc=(a>c);
    int bgrterthanc=(b>c);


    int large=agrterthanb? (agrterthanc? a:c):(bgrterthanc? b:c);
     printf("Largest Number is : %d \n",large);

    int total=a+b+c;
    float avargae=total/(float)3;

    printf("avarage is: %.2f\n",avargae);


    return 0;
}










//int largenum=(a>b)? ((a>c)? a:c): ((b>c)? b:c);
  //  printf("Largest Number is : %d \n",largenum);
