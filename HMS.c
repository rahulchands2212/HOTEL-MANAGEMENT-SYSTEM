#include<stdio.h>
#include<string.h>

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
    char status[20];
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

    strcpy(c.status,"Booked"); //update status;

    c.bill = c.days * charge;

    printf("\nRoom Booked Successfully!\n");
    printf("----------------------------\n");
    printf("Customer Name : %s\n", c.name);
    printf("Room Number   : %d\n", c.room);
    printf("Days Stayed   : %d\n", c.days);
    printf("room status   : %s\n",c.status);
    printf("Total Bill    : %.2f\n", c.bill);
    printf("----------------------------\n");

    /*------------------------------------put data on file--------------------*/

    FILE *fptr;
    fptr = fopen("record.txt","a");

    if(fptr==NULL){
        printf("file not created");
    }



    fprintf(fptr,"NAME        : %s\n",c.name);
    fprintf(fptr,"ROOM NUMBER : %d\n",c.room);
    fprintf(fptr,"DAYS STAYED : %d\n",c.days);
    fprintf(fptr,"ROOM STATUS : %s\n",c.status);
    fprintf(fptr,"------------------------------------------------------------------------------------\n");

    fclose(fptr);

   header();
}


/*-------------------------------------------MAIN FUNCTION------------------------------------------------------------*/

int main(){
    /*-----------------store heading on record file-----------------------------*/
    FILE *fptr;
    fptr = fopen("record.txt","a");

    if(fptr==NULL){
        printf("file not created");
    }
   
    fprintf(fptr,"---------------------ROOMS STATUS-----------------------------\n\n");
    fclose(fptr);

    header();
   
    return 0;
}