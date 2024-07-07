/*
 * Title : Hotel Reservation System;
 * Type : Basic and simple;
 * Objective : To clear concept in basics of C program;
 * Author : Mahesh Gurung;
 */


#include <stdio.h>
#include <ctype.h>
#include <math.h>

void service();
void roomSelection();

int main(){
    printf("\n ************************************************\n");
    printf("-----------------LALACA HOTEL---------------------\n");

    service();

    


    return 0;
}

void service(){
    int count = 0;
    int c;
    printf("What type of service would you like to have?\n");
    printf("*********\n1 : Rooms\n2 : Onsens \n3 : BBQ\n");
    scanf("%d", &c);
    while (c < 1 || c > 4){
        count++;
        if(count < 5){
                printf("Enter valid option again please: ");    
                scanf("%d", &c);
        }
        else{
            printf("Sorry, Contact at hotel");
            return;
        }

    }
    
    switch(c){
        case 1 :
            printf("Thank you for choosing room service\n");
            roomSelection();
            break;
        case 2 : 
            printf("Thank you for choosing Onsen services\n");
            break;
        case 3 :
            printf("Thank you for choosing BBQ\n");
            break;
        case 4 :
            printf("Contact at hotel");
            break;
    }
}
void roomSelection(){
    int num;
    printf("\nWe have two types of room available\n *********\n 1 for Bed type \n 2 for futton type \n 3 for main menu");
    scanf("%d", &num);
    if(num == 1){
        printf("Thank you for the Bed Type Selection");
    }
    else if(num == 2){
        printf("Thank you for the futton type selection");
    }
    else if(num == 3){
        service();
    }
    else{
        printf("Enter an valid option");
    }
}


        
