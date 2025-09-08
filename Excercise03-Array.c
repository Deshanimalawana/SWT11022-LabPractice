#include <stdio.h>


int main()
{
    float numbers[10];
    float max_value;
    printf("Enter here 10 floating-point numbers:\n");

    for(int x=0; x<10; x++)
    {
        printf("Studentsmark %d:",x+1);
        scanf("%f", &numbers[x]);
    }

    max_value=numbers[0];
    for (int x=1; x<10; x++){
        if (numbers[x]>max_value){
            max_value=numbers[x];
        }
    }
    printf("Maximum value:%f\n",max_value);
    return 0;
}
