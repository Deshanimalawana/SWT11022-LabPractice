#include <stdio.h>

int main()
{
    int num, count, total;
    int num_list[10];
    int *point_num_list = num_list;
    while (count<10)
    {
        printf("Enter a number %d : ",count+1);
        scanf("%d",&num);
        num_list[count]=num;
        count++;
    }
    count = 0;
    while (count<10)
    {
        total = *(point_num_list + 1)+ total;
        count++;
    }
    printf("The Total is %d",total);

}