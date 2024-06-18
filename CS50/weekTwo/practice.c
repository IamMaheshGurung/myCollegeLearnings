#include <stdio.h>

int main() {
    char name[100]; // Buffer to store the input string

    printf("Enter your name: ");
    scanf("%99s", name); // Read up to 99 characters to prevent buffer overflow

    printf("Your name is: %s\n", name);

    return 0;
}
