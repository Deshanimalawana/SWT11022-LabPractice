#include<stdio.h>
int main()
{
    int i;
    //DECLEAR A ARRAY//
    int array[3][3]={
        {34,81,96},
        {72,48,24},
        {80,10,71}

};
//print the address of the array//
int (*ptr)[3]=array;

printf("array address with pointer: %p\n",(void*)ptr);
printf("array address for an element: %p\n",(void*)&array[0][0]);
printf("\n");

//print each row//
for (int i = 0; i < 3; i++) {
        printf("Address of row %d: %p\n", i, (void*)(array + i));
    }
    printf("\n");
//print all the elements in array//
    for (i=0; i<3; i++){
        for (int j=0; j<3; j++){
            printf("Address of element [%d][%d]: %p\n", i, j,(void*)((array + i)+j));

        }
    }
    printf("\n");
    //Dereference the pointers to print the elements of the array.//
    for (i=0; i<3; i++){
        for (int j=0; j<3; j++){
            printf(" element [%d][%d]= %d\n", i, j,*(*(array + i)+j));

        }
    }
    printf("\n");
//sum of the array//
    int sum=0;
    for(i=0; i<3; i++){
        for (int j=0;j<3; j++){
            sum += *(*(array + i) + j);
        }
    }
    printf("sum of the array: %d",sum);
    printf("\n");

return 0;
}

