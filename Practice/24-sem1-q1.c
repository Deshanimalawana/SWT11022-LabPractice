    #include <stdio.h>
    #include <string.h>

    struct item{
        int item_code;
        char name[30];
        int quantity;
    }item1[100];

    int item_code,quantity;
    char name[30];
    void add_new_item(){

        printf("Enter the item code: ");
        scanf("%d",&item_code);
        printf("Enter the name: ");
        scanf("%s",&name);
        printf("Enter the Quantity: ");
        scanf("%d",&quantity);
        int dupli=0;
        for(int i = 0;i<100;i++)
        {
            if (item1[i].item_code==item_code)
            {
                printf("\n\nDuplicate item_code\n");
                dupli=1;
                break;
            }
        }
        for (int i = 0;i<100;i++){
            if((strcmp(item1[i].name,"")==0)&& dupli==0)
            {
                item1[i].item_code=item_code;
                //            item1[i].name=name;
                strcpy(item1[i].name, name);
                item1[i].quantity=quantity;
                break;
            }

    }}

    void update_quantity(){
        printf("Enter the item code to be updated: ");
        scanf("%d",&item_code);
        printf("Enter the new quantity: ");
        scanf("%d",&quantity);
        int is_found = 0;
        for(int i = 0;i<100;i++)
        {
            if(item1[i].item_code==item_code){
                item1[i].quantity=quantity;
                is_found = 1;
            }
        }
        if (is_found==0){
            printf("The item with the item code of %d not found\n",item_code);
        }
    }

    void display_all(){
        int count=0;
        for(int i = 0;i<100;i++){
            if(strcmp(item1[i].name,"") != 0){
                printf("%d \t %s \t %d\n",item1[i].item_code,item1[i].name,item1[i].quantity);
                count = 1;}
        }if (count ==0){printf("Item list is empty\n");}
    }

    void find_item(){
        printf("Enter the item code to search: ");
        scanf("%d",&item_code);
        int is_found = 0;

        for(int i = 0;i<100;i++){
            if(item1[i].item_code==item_code)
            {
                printf("%d \t %s \t %d\n",item1[i].item_code,item1[i].name,item1[i].quantity);
                is_found = 1;
                break;
            }}
            if (is_found==0){
                printf("The item with the item code of %d not found\n",item_code);

            }

    }

    int main(){


        int choice;
        printf("\n1. Add a new item to the inventory\n2. Update the quantity of an existing item\n3. Display all items in the inventory\n4. Find an item by its code\n5. Exit\n");

        while(1){
            printf(">");
            scanf("%d",&choice);
            if(choice==1){
                add_new_item();
            }else if(choice == 2){
                update_quantity();
            }else if(choice == 3){
                display_all();
            }else if(choice == 4){
                find_item();
            }else if(choice == 5){
                printf("BYE BYE 👋👋👋");
                break;
            }else{
                printf("\n\nSelect valid option");
        }
    }}