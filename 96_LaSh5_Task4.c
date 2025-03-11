#include <stdio.h>
int main() {

  int a,b,c;
  printf("Enter your number:\n");
  scanf("%d%d%d",&a,&b,&c);

  if(a>b) {
    if(a>c) {
        printf("The largest number is %d\n", a);
    }
  }
    else if(b>c) {
        printf("The largest number is %d\n",b);
    }
    else{
        printf("The largest number is %d\n",c);
     }






 return 0;

}
