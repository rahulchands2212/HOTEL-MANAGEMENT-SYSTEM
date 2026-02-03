#include<stdio.h>

/*------------------------------------function declarations----------------------------------------*/
void header();
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

    /*----------------------------------print all features on screen----------------------------*/
    printf("1.Room Booking\n");
printf("2.Check-in\n");
printf("3.Check-out\n");
printf("4.Customer Details\n");
printf("5.Billing\n");
printf("6.Exit");
printf("\n\n");

for(i=0;i<=50;i++){
    printf("--");
}

printf("\n");
/*-------------------------------------take input-----------------------------------------*/
    int user_enter;
printf("select option : ");
scanf("%d",&user_enter);
getchar(); //clear buffer

switch(user_enter){
    case 1:
    roombooking();
    break;

    // case 2:
    // checkin();
    // break;

    // case 3:
    // checkout();
    // break;

    // case 4:
    // customer_details();
    // break;

    // case 5:
    // billing();
    // break;

    // case 6:
    // exit_program();
    // break;

    default:
    printf("select vaild option\n");
}
}

/*----------------------------------------structure of booking-----------------------------------------------------*/
struct customer {
    char name[30];
    int room;
    int days;
    float bill;
}c;

/*----------------------------------------room booking--------------------------------------------------------------*/
void roombooking() {
    float charge = 1000;   // per day charge

    printf("\n------ ROOM BOOKING ------\n");

    printf("Enter Customer Name: ");
    gets(c.name);
    
    printf("Enter Room Number: ");
    scanf("%d", &c.room);
   

    printf("Enter Number of Days: ");
    scanf("%d", &c.days);

    c.bill = c.days * charge;

    printf("\nRoom Booked Successfully!\n");
    printf("----------------------------\n");
    printf("Customer Name : %s\n", c.name);
    printf("Room Number   : %d\n", c.room);
    printf("Days Stayed   : %d\n", c.days);
    printf("Total Bill    : %.2f\n", c.bill);
    printf("----------------------------\n");
}


/*-------------------------------------------MAIN FUNCTION------------------------------------------------------------*/

int main(){
    header();
    return 0;
}