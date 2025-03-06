#include<stdio.h>
int main(){
int x=10, y=4;
int isGraterThan = (x >y);
int isEqual = (x==y);
int isNotEqual = (x != y);

printf("Is x grater than y? %s\n",isGraterThan ? "Yes" : "No");
printf("Is x equal y? %s\n",isEqual ? "Yes" : "No");
printf("Is x not equal y? %s\n",isNotEqual ? "Yes" : "No");
return 0;
}
