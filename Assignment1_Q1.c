#include<stdio.h>

struct Date{
    int dd;
    int mm;
    int yy;
};

void initDate(struct Date* ptrDate){

    ptrDate->dd=0;
    ptrDate->mm=0;
    ptrDate->yy=0;

};


void printDateOnConsole(struct Date* ptrDate){
    printf("Date:%d/%d/%d\n",ptrDate->dd,ptrDate->mm,ptrDate->yy);
}

void acceptDateFromConsole(struct Date* ptrDate){
    printf("enter day:");
    scanf("%d",&ptrDate->dd);

    printf("enter month:");
    scanf("%d",&ptrDate->mm);


    printf("enter year:");
    scanf("%d",&ptrDate->yy);

}

int main(){
    struct Date x;
    int choice;

        initDate(&x);

    do{
        printf("\nMenu:\n");
        printf("\n1.initialize date\n");
        printf("\n2.Print Date\n");
        printf("\n3.Accept Date\n");
        printf("\nenter your choice:\n");
        scanf("%d",&choice);


        switch (choice)
        {
        case 1:
        initDate(&x);
        printf("Date initialized.\n");
        break;

         case 2:
        printDateOnConsole(&x);
        break;

         case 3:
        acceptDateFromConsole(&x);
        break;
        
        default:
        printf("please try again.\n");
            break;
        }
   }while (choice!=3);
   
   return 0;
}