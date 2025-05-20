
/*
#include<stdio.h>
int main(){
int *ptr;
int a=10;
ptr=&a;
printf("%d",*ptr);
return 0;
}
*/


#include<stdio.h>
int main(){
int *p;
int a=5;
p=&a;

printf("address of a:%p\n",&a);
printf("value of p (address of a):%p\n",p);
printf("value pointed to by p:%d\n",*p);

return 0;
}


/*
#include<stdio.h>
int main(){
    int arr[3]={10,20,30};
    int *p=arr;

    printf("%d\n",*p);
    printf("%d\n",*(p+1));

    return 0;
}

*/

/*
#include<stdio.h>
int main(){

int num1=10,num2=20;
int *ptr1,*ptr2;
int temp;

ptr1=&num1;
ptr2=&num2;

printf("before swapping :\n");
printf("num1= %d, num2= %d\n",num1,num2);

temp=*ptr1;
*ptr1=*ptr2;
*ptr2=temp;

printf("\nAfter swapping :\n");
printf("num1= %d, num2= %d\n",num1,num2);

return 0;
}

*/


















