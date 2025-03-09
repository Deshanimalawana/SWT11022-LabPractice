#include<stdio.h>
void printBinary(unsigned int num){for(int i=7;i>=0;i--){printf("%d",(num>>i)&1);}}
//#define PRINT_BINARY(n) for (int i=31;i>=0;i--)printf("%d",(n>>1)&1)
int main(){
int x=5,y=3;
int andResult=x&y;
int orResult=x|y;
int xorResult=x^y;

printf("Bitwise And:%d(Binary:",x&y);
printBinary(x&y);
printf(")\n");
printf("Bitwise Or:%d(Binary:",x|y);
printBinary(x|y);
printf(")\n");
printf("Bitwise Xor:%d(Binary:",x^y);
printBinary(x^y);
printf(")\n");

printf("x before increment:%d\n",x);
printf("Prefix increment:%d\n",++x);
printf("Postfix increment:%d\n",x++);
printf("x after postfix increment:%d\n",x);

printf("y before increment:%d\n",y);
printf("Prefix increment:%d\n",++y);
printf("Postfix increment:%d\n",y++);
printf("y after postfix increment:%d\n",y);
return 0;
}
