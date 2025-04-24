#include <stdio.h>

int main(){
    int id;
    int password;
    printf("Enter the id:");
    scanf("%d",&id);


    switch(id){
        case 1001:
            printf("Enter the Password: ");
            scanf("%d", &password);
            switch(password){
                case 1001:
                    printf("Welcome Piragenth");
                    break;
                default:
                    printf("Wrong Password");
                    //break;
            }
            break;
        case 1002:
            printf("Enter the Password: ");
            scanf("%d", &password);
            switch(password){
                case 1002:
                    printf("Welcome Satkunanthan");
                    break;
                default:
                    printf("Wrong Password");
                    break;
            }
            break;
    }
}
