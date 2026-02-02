#include<stdio.h>

/*------------------------------------function declarations----------------------------------------*/
void header();
void features();
void input();
void roombooking();
void checkin();
void checkout();
void customer_details();
void billing();
void exit_program();

/*---------------------------------------printing the heading-------------------------------------------------------------*/

void header(){
    int i =0;
    for(int i=0;i<=50;i++){
        printf("==");
    }

    printf("\n\n");
    printf("\t\t\t\t\tHOTEL MANAGEMENT SYSTEM");
    printf("\n\n");

    for(i =0;i<=50;i++){
        printf("==");
    }
    printf("\n\n");

    //call features
    features();
}

/*-----------------------------------------print all features on screen-------------------------------------------------------------*/
void features(){
printf("1.Room Booking\n");
printf("2.Check-in\n");
printf("3.Check-out\n");
printf("4.Customer Details\n");
printf("5.Billing\n");
printf("6.Exit");
printf("\n\n");
int i;
for(i=0;i<=50;i++){
    printf("--");
}

    //call input;
    input();
}

/*-----------------------------------------------take input----------------------------------------------------------*/
void input(){
int user_enter;
printf("select option : ");
scanf("%d",&user_enter);

switch(user_enter){
    case 1:
    roombooking();
    break;

    case 2:
    checkin();
    break;

    case 3:
    checkout();
    break;

    case 4:
    customer_details();
    break;

    case 5:
    billing();
    break;

    case 6:
    exit_program();
    break;

    default:
    printf("select vaild option\n");
}
}
/*-------------------------------------------MAIN FUNCTION------------------------------------------------------------*/

int main(){
    header();
    return 0;
}