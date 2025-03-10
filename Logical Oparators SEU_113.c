#include<stdio.h>
int main()
{
  int conditional = 1   ; //True
  int conditiona2 = 0; //False
  int conditiona3 = 1; //True

  int result1 = conditional && conditiona2;
  int result2 = conditional || conditiona3;
  int result3 = !conditiona2;

  printf("Result 1: %s\n",result1 ? "True": "False");
  printf("Result 2: %s\n",result2 ? "True" :"False");
  printf("Result 3: %s\n",result3 ? "True": "False");

  return 0;
}
