/*
 *Title : TEMPRETURE CONVERTER
 *Author : Mahesh Gurung
 *Source : Tutorial Exercise
*/

#include <stdio.h>
#include <ctype.h>

int main(){
    //declaration

    char unit;
    float temp;
    
    printf("TEMPRETURE CONVERISON\n");
    printf("\n");
    printf("Is the tempreture in (F) or (C)?\n while C is celsius and F is Fahrenheit");

    scanf("%c", &unit);
    unit = toupper(unit);

    switch(unit){
        case 'C':
            printf("\n Enter the tempreture in celcius:");
            scanf("%f", &temp);
            temp = (temp * 9 / 5) + 32;
            printf("the tempreture in fahrenheit is %.2f", temp);
            break;

        case 'F' :
            printf("\n Enter the tempreture in Fahrenheit:");
            scanf("%f", & temp);
            temp = (temp -32) * 5 /9;
            printf("The temp in celcius is %.2f", temp);
            break;

        default:
            printf("Enter a valid unit and try again");
    }
            


    return 0;
}

        

