#include<stdio.h>
int main()
{
    int arr[10],unique[10];
    int i,j,k=0,duplicate;

    printf("Enter 10 integers:\n");
    for(i=0; i<10; i++){scanf(" %d", &arr[i]);}

     for( i=0; i<10; i++){duplicate =0; for(j=0; j<k; j++){if(arr[i] == unique[j]){duplicate=1; break;}
        }
        if(!duplicate){unique[k]=arr[i]; k++;
        }
     }

     printf("Unique values are:");
     for( i=0; i<k; i++){printf("%d ",unique[i]);}

 return 0;
}
