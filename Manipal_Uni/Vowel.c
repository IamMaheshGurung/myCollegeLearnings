#include <stdio.h>

int main() {
    char inputChar; // Variable to hold the input character

    // Prompt the user to enter a character
    printf("Enter an alphabet: ");
    
    // Read the input character from the user
    scanf(" %c", &inputChar);
    
    // Check if the entered character is a vowel or consonant
    if ((inputChar >= 'A' && inputChar <= 'Z') || (inputChar >= 'a' && inputChar <= 'z')) {
        // Convert uppercase to lowercase for simplicity
        if (inputChar >= 'A' && inputChar <= 'Z') {
            inputChar = inputChar + 32;
        }

        // Check for vowels
        if (inputChar == 'a' || inputChar == 'e' || inputChar == 'i' || inputChar == 'o' || inputChar == 'u') {
            printf("%c is a vowel.\n", inputChar);
        } else {
            printf("%c is a consonant.\n", inputChar);
        }
    } else {
        // If the input is not an alphabet
        printf("The input is not a valid alphabet.\n");
    }
    
    return 0;
}
