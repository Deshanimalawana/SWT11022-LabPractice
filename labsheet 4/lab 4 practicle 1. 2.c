#include<stdio.h>

int main(){
    int x = 10, y = 4;
    int isGreaterThan = (x>y);
    int isEqual = (x == y);
    int isnotequal = (x != y);

    printf("IS x grater than y? %s\n",isGreaterThan ? "Yes": "No");
    printf("IS x Equal to y? %s\n",isEqual ? "Yes": "No");
    printf("IS x Not Equal to y? %s\n",isnotequal ? "Yes": "No");

    return 0;

}
