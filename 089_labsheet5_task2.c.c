    #include<stdio.h>
    int main(){

        int marks;

         printf("Enter Marks:");

         scanf("%d", &marks);

    if ( marks>= 90) {
         printf(" excellent");
    }
    else if( 75<= marks && marks<= 89){
        printf("Very Good");
    }
    else if ( 50<= marks && marks <=74) {
        printf("good");
    }
    else {
        printf("fail");
    }

    return 0;

    }
