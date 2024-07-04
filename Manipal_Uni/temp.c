/*TEMPRETURE CONVERTER*/

#include <stdio.h>

int main(){
    int Temp;
    int choice;
    
    

    printf("Enter the desired temp: \n");
    scanf("%d", &Temp);
    printf("Enter 0 for celsius to Fahrenheit and 1 for fahrenheit to Celsius: ");
    scanf("%d", &choice);

    if(choice==0){
        Temp = (Temp * 9/5) + 32;
        printf("%d", &Temp);
    }
    else if(choice==1){
        Temp= (Temp - 32) * (5/9);
        printf("%d", &Temp);
    }


    return 0;
}

        

