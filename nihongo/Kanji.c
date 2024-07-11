



#include <stdio.h>
#include <ctype.h>
#include <string.h>




int main(){
    char Answer[20];
    printf("Lets learn Kanji\n");
    printf("\n");

    printf("\n1. What is reading of this kanji 日?\n");
    scanf("%s", Answer);

    if(strcmp(Answer, "にち")==0　||strcmp(Answer, "ジツ")==0){
        printf("\nYEah its correct\n");
    }
    else{
        printf("\nWrong Answer Try again\n");
    }
    





    return 0;
}
