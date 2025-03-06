#include<stdio.h>
int main()
{
int x = 30, y =10;
int isgreaterthan = (x>y);
int isEqual = (x==y);
int isnoteqal = (x !=y);

printf("Is the x Greater than y? %s\n",isgreaterthan ? "Yes": "No");
printf("Is x and y Equal? %s\n", isEqual ? "Yes": "No");
printf("Is x and y not Equal? %s\n", isnoteqal ? "Yes": "No");

return 0;
}
