#include<stdio.h>

int main(){
    int a=10 , b=20 ,c=30;

 int isalargethanb= a>b;
 int isalargethanc= a>c;
 int isblargethanc= b>c;

int islargest = isalargethanb ? ((isalargethanc) ? a:c):((isblargethanc) ? b:c);

  printf("largest number: %d\n",islargest);

  float average= (a+b+c)/3.0;
  printf("average:%f\n",average);

  return 0;

}
