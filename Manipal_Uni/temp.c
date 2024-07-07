/*
 *Title : TEMPRETURE CONVERTER
 *Author : Mahesh Gurung
 *Source : Tutorial Exercise
*/


#include <stdio.h>
#include <ctype.h>



int main(){

    char unit;
    double temp;

    printf("Tempreture conversion Program");
    printf("------------------------------");
    printf("Is your tempreture (F) or (C)? \n (F) for fahrenheit \n (C) for Celcius");
    scanf("%c", &unit);

    unit = toupper(unit);

    if(unit == 'C'){
        printf("Enter the temp in Celcius:");
        scanf("%lf", &temp);
        temp = (temp * 9 / 5) + 32;
        printf("The converted is temp is %lf degree F.\n", temp);
    }
    else if(unit == 'F'){
        printf("Enter the temp in Fahreneit:");
        scanf("%lf", &temp);
        temp = (temp - 32) * 5 / 9;
        printf("The converted temp is %lf degree C.\n", temp);
    }
    else{
        printf("Enter a valid unit to proceed");
    }

    printf("Re-run program to repeat\n");

    return 0;
}



        

