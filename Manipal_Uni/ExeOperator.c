#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

int main(){
    int b;//declearation
    b = 789;//initialisation
    bool c =true;
    float m = 12.345;
    float n = 2345.890035;

    char y = 120;
    char x = 'A';//single character
    char message[20]="I am ok";//array of characters

    if (isupper(x)) {
        printf("%c\n", x);
        printf("%d\n", c);
        printf("%c\n", y);
        printf("%10.3f\n", m);
        printf("%10.3f\n", n);
        printf("%p\n", &m);
        printf("%p\n", &n);
    }
    return 0;
}

