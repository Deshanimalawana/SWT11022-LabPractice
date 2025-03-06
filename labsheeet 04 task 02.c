#include<stdio.h>
int main(){
int x=10, y=4;
int isgreaterthan=(x>y);
int isEqual=(x==y);
int isNotEqual=(x!=y);
printf("Is greater than y?%s\n",isgreaterthan?"yes" : "no");
printf("is x equal to y?%s\n",isEqual?"yes" : "no");
printf("is not equal to y?%s\n",isNotEqual?"yes" : "no");
return 0;
}
