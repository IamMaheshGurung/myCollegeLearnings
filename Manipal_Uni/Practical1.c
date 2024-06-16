#include <stdio.h>
int main(){
	//declearing a character array to hold the input

    char inputString[100];

    // lets prompt the user to enter a string,

    printf("Enter any string: ");
    //using gets() here to read a line of text from stanadard input 
    gets(inputString);

    puts("you have entered : ");
    puts(inputString);
   
    return 0;
}

